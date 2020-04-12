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

#pragma once

#include <PugiXml/pugixml.hpp>
#include <string>
#include <vector>

using namespace std;
using namespace pugi;

// Extracting data from <compounddef kind="struct" ...>
// or <compounddef kind="class" ...>
class ClassAnalyzer
{
private:
    xml_node compounddef_;
    string id_;
    string kind_; // "struct" or "class"
    string className_;
    string comment_;
    string headerFile_; // Empty when enum is internal (defined in *.cpp)
    bool isTemplate_;
    bool isAbstract_;
    bool isRefCounted_;
    vector<xml_node> memberdefs_;

public:
    ClassAnalyzer(xml_node compounddef);

    xml_node GetCompounddef() const { return compounddef_; }
    const string& GetID() const { return id_; }
    const string& GetKind() const { return kind_; }
    const string& GetClassName() const { return className_; }
    const string& GetComment() const { return comment_; }
    const string& GetHeaderFile() const { return headerFile_; }
    bool IsInternal() const { return headerFile_.empty(); }
    bool IsTemplate() const { return isTemplate_; }
    bool IsAbstract() const { return isAbstract_; }
    bool IsRefCounted() const { return isRefCounted_; }
    const vector<xml_node>& GetMemberdefs() const { return memberdefs_; }
    
    xml_node FindMember(const string& name);
};
