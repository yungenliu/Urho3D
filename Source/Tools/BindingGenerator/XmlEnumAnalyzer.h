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

// Extracting data from <memberdef kind="enum" ...>
class EnumAnalyzer
{
private:
    xml_node memberdef_;
    string id_;
    string typeName_;
    string comment_;
    vector<string> enumerators_;
    
    // Empty when enum is internal (defined in *.cpp)
    string headerFile_;

public:
    EnumAnalyzer(xml_node memberdef);

    xml_node GetMemberdef() const { return memberdef_; }
    const string& GetID() const { return id_; }
    const string& GetTypeName() const { return typeName_; }
    const string& GetComment() const { return comment_; }
    const string& GetHeaderFile() const { return headerFile_; }
    const vector<string>& GetEnumerators() const { return enumerators_; }
    bool IsInternal() const { return headerFile_.empty(); }
};
