//
// Copyright (c) 2008-2020 the Urho3D project.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

#include "XmlSourceData.h"
#include "Utils.h"
#include <algorithm>
#include <cassert>
#include <memory>

// For GetXmlFiles()
#ifdef _WIN32
#include <windows.h>
#else
#include <dirent.h>
#include <sys/stat.h>
#endif

#include <iostream>

static void LoadXml(const string& fullPath)
{
    // All loaded XMLs. Not used directly, just prevents destruction
    static vector<shared_ptr<xml_document> > xmlStorage;

    // Load and store XML file
    shared_ptr<xml_document> xmlDocument = make_shared<xml_document>();
    xml_parse_result parseResult = xmlDocument->load_file(fullPath.c_str());
    cout << "Bindgen: File " << fullPath << " parsed\n";
    assert(parseResult);
    xmlStorage.push_back(xmlDocument);

    string fileName = GetFileName(fullPath);

    cout << "Bindgen: parsed file name " << fileName << "\n";

    // Fill defines_
    if (fileName == "index.xml")
    {
        xml_node doxygenindex = xmlDocument->child("doxygenindex");
        assert(doxygenindex);

        for (xml_node compound : doxygenindex.children("compound"))
        {
            for (xml_node member : compound.children("member"))
            {
                string kind = member.attribute("kind").value();

                if (kind == "define")
                {
                    string name = member.child("name").child_value();
                    SourceData::defines_.push_back(name);
                }
            }
        }

        cout << "Bindgen: index founded\n";
    }
    // Fill memberdefs_ and compounddefs_
    else if (StartsWith(fileName, "struct") || StartsWith(fileName, "class"))
    {
        xml_node compounddef = xmlDocument->child("doxygen").child("compounddef");
        assert(!compounddef.empty());
        string kind = compounddef.attribute("kind").value();
        assert(kind == "struct" || kind == "class");
        string id = compounddef.attribute("id").value();
        assert(!id.empty());

        SourceData::classes_.insert({ id, compounddef });

        for (xml_node sectiondef : compounddef.children("sectiondef"))
        {
            for (xml_node memberdef : sectiondef.children("memberdef"))
            {
                string id = memberdef.attribute("id").value();
                SourceData::members_.insert({ id, memberdef });
            }
        }

        cout << "Bindgen: this is class\n";
    }
    // Init namespaceUrho3D_
    else if (fileName == "namespace_urho3_d.xml")
    {
        xml_node compounddef = xmlDocument->child("doxygen").child("compounddef");
        assert(!compounddef.empty());
        string kind = compounddef.attribute("kind").value();
        assert(kind == "namespace");
        string compoundname = compounddef.child("compoundname").child_value();
        assert(compoundname == "Urho3D");

        SourceData::namespaceUrho3D_ = compounddef;

        cout << "Bindgen: this is namespace\n";
    }
}

static string AddTrailingSlash(const string& pathName)
{
    string ret = pathName;
    replace(ret.begin(), ret.end(), '\\', '/');
    if (!ret.empty() && ret.back() != '/')
        ret += '/';
    return ret;
}

static void GetXmlFiles(string dirPath, vector<string>& result)
{
    result.clear();
    dirPath = AddTrailingSlash(dirPath);

#ifdef _WIN32
    WIN32_FIND_DATAA findData;
    HANDLE handle = FindFirstFileA((dirPath + "*.xml").c_str(), &findData);
    if (handle == INVALID_HANDLE_VALUE)
        return;

    do
    {
        if (!(findData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY))
            result.push_back(dirPath + findData.cFileName);
    } while (FindNextFileA(handle, &findData));

    FindClose(handle);
#else
    DIR* dir = opendir(dirPath.c_str());
    if (!dir)
        return;

    cout << "BindGen: dir " << dirPath << " is opened\n";

    struct stat st;
    while (dirent* de = readdir(dir))
    {
        string filePath = dirPath + de->d_name;

        cout << "BindGen: filePath = " << filePath << "\n";

        if (stat(filePath.c_str(), &st) != 0)
            continue;

        cout << "BindGen: stat success\n";

        if (st.st_mode & S_IFDIR)
            continue;

        cout << "Is dir\n";

        if (EndsWith(filePath, ".xml"))
            result.push_back(filePath);

        cout << "BindGen: pushed to vector\n";
    }

    closedir(dir);
#endif
}

namespace SourceData
{
    unordered_map<string, xml_node> classes_;
    xml_node namespaceUrho3D_;
    unordered_map<string, xml_node> members_;
    vector<string> defines_;

    void LoadAllXmls(const string& dir)
    {
        vector<string> fullPaths;
        GetXmlFiles(dir, fullPaths);

        for (string fullPath : fullPaths)
            LoadXml(fullPath);
    }
}
