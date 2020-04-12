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

#include "ASResult.h"
#include "Tuning.h"
#include "Utils.h"
#include "XmlAnalyzer.h"
#include "XmlEnumAnalyzer.h"
#include "XmlSourceData.h"

#include <cassert>

static void ProcessEnum(EnumAnalyzer& analyzer)
{
    if (analyzer.IsInternal())
        return;

    string header = analyzer.GetHeaderFile();
    if (IsIgnoredHeader(header))
        return;

    if (Contains(analyzer.GetComment(), "BIND_IGNORE"))
        return;

    ASResult::AddHeader(header);

    string insideDefine = InsideDefine(header);
    if (!insideDefine.empty())
        ASResult::regFirst_ << "#ifdef " << insideDefine << "\n";

    ASResult::WriteLocation(ASResult::regFirst_, analyzer.GetMemberdef());

    string name = analyzer.GetTypeName();
    ASResult::regFirst_ << "    engine->RegisterEnum(\"" << name << "\");\n";

    for (string value : analyzer.GetEnumerators())
    {
        ASResult::regFirst_ <<
            "    engine->RegisterEnumValue("
            "\"" << name << "\", "
            "\"" << value << "\", "
            << value << ");\n";
    }

    if (!insideDefine.empty())
        ASResult::regFirst_ << "#endif\n";

    ASResult::regFirst_ << "\n";
}

void ASProcessAllEnums()
{
    xml_node sectiondef = FindSectiondef(SourceData::namespaceUrho3D_, "enum");
    assert(sectiondef);

    for (xml_node memberdef : sectiondef.children("memberdef"))
    {
        EnumAnalyzer analyzer(memberdef);
        ProcessEnum(analyzer);
    }
}
