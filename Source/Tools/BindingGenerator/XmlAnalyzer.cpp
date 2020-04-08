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

#include "XmlAnalyzer.h"
#include "Utils.h"

#include <cassert>

static string HeaderFullPathToRelative(const string& fullPath)
{
    size_t pos = fullPath.rfind("Source/Urho3D");
    assert(pos != string::npos);
    return ".." + fullPath.substr(pos + strlen("Source/Urho3D"));
}

string ExtractHeaderFile(xml_node memberdef)
{
    xml_node location = memberdef.child("location");
    assert(location);

    string declfile = location.attribute("declfile").value();
    if (EndsWith(declfile, ".h"))
        return HeaderFullPathToRelative(declfile);

    string file = memberdef.child("location").attribute("file").value();
    if (EndsWith(file, ".h"))
        return HeaderFullPathToRelative(file);

    return string();
}

string ExtracLocation(xml_node memberdef)
{
    string result;

    string kind = memberdef.attribute("kind").value();
    if (kind == "enum")
    {
        string name = memberdef.child("name").child_value();
        result = "enum " + name;
    }
    else
    {
        string definition = memberdef.child("definition").child_value();
        string argsstring = memberdef.child("argsstring").child_value();
        result = definition + argsstring;
    }

    string file = ExtractHeaderFile(memberdef);
    string line = memberdef.child("location").attribute("line").value();
    result += " | File: " + file + " | Line: " + line + "\n";

    return result;
}

xml_node FindSectiondef(xml_node compounddef, string kind)
{
    for (xml_node sectiondef : compounddef.children("sectiondef"))
    {
        string k = sectiondef.attribute("kind").value();
        if (k == kind)
            return sectiondef;
    }

    return xml_node(); // Return empty node, if not founded
}

static string DescriptionToString(xml_node description)
{
    string result;

    for (xml_node para : description.children("para"))
    {
        for (xml_node part : para.children())
        {
            string partName = part.name();

            if (partName == "ref")
                result += part.child_value();
            else
                result += part.value();
        }
    }

    return result;
}

string ExtractComment(xml_node memberdef)
{
    return DescriptionToString(memberdef.child("briefdescription"))
        + DescriptionToString(memberdef.child("detaileddescription"));
}
