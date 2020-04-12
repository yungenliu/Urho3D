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

#include "Utils.h"
#include "XmlAnalyzer.h"
#include "XmlClassAnalyzer.h"
#include "XmlSourceData.h"

#include <cassert>

static string ExtractHeaderFileFromAnyMember(xml_node compounddef)
{
    for (xml_node sectiondef : compounddef.children("sectiondef"))
    {
        xml_node memberdef = sectiondef.child("memberdef");
        if (memberdef)
            return ExtractHeaderFile(memberdef);
    }

    return string();
}

ClassAnalyzer::ClassAnalyzer(xml_node compounddef)
{
    compounddef_ = compounddef;

    id_ = compounddef.attribute("id").value();
    assert(!id_.empty());

    kind_ = compounddef.attribute("kind").value();
    assert(kind_ == "struct" || kind_ == "class");

    className_ = compounddef.child("compoundname").child_value();
    assert(StartsWith(className_, "Urho3D::"));
    className_ = CutStart(className_, "Urho3D::");

    comment_ = ExtractComment(compounddef);
    headerFile_ = ExtractHeaderFileFromAnyMember(compounddef);
    isTemplate_ = !compounddef.child("templateparamlist").empty();
    isAbstract_ = (compounddef.attribute("abstract").value() == string("yes"));

    // Init memberdefs_
    xml_node listofallmembers = compounddef_.child("listofallmembers");
    assert(listofallmembers);

    for (xml_node member : listofallmembers.children("member"))
    {
        xml_attribute ambiguityscope = member.attribute("ambiguityscope");
        if (!ambiguityscope.empty()) // Overridden member from parent class
            continue;

        string id = member.attribute("refid").value();
        memberdefs_.push_back(SourceData::members_[id]);
    }

    isRefCounted_ = FindMember("AddRef") && FindMember("ReleaseRef");
}

xml_node ClassAnalyzer::FindMember(const string& name)
{
    for (xml_node memberdef : GetMemberdefs())
    {
        if (memberdef.child("name").child_value() == name)
            return memberdef;
    }

    return xml_node();
}
