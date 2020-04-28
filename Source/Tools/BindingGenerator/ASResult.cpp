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

#include <fstream>
#include <vector>

namespace ASResult
{

// List of all required header files
static vector<string> headers_;

stringstream glue_;
stringstream regFirst_;
stringstream reg_;

void AddHeader(const string& headerFile)
{
    if (!CONTAINS(headers_, headerFile))
        headers_.push_back(headerFile);
}

void WriteLocation(stringstream& stream, xml_node memberdef)
{
    if (&stream != &glue_)
        stream << "    ";

    stream << "// " << ExtracLocation(memberdef);
}

void Save(const string& path)
{
    ofstream out(path);

    out <<
        "// DO NOT EDIT. This file is generated\n"
        "\n"
        "#include \"Precompiled.h\"\n"
        "#include \"AngelScript/APITemplates.h\"\n"
        "\n";

    sort(headers_.begin(), headers_.end());
    for (string header : headers_)
    {
        string insideDefine = InsideDefine(header);
        if (!insideDefine.empty())
            out << "#ifdef " << insideDefine << "\n";

        out << "#include \"" << header << "\"\n";

        if (!insideDefine.empty())
            out << "#endif\n";
    }

    out <<
        "\n"
        "namespace Urho3D\n"
        "{\n"
        "\n"
        << glue_.str() <<
        "void RegisterGenerated(asIScriptEngine* engine)\n"
        "{\n"
        << regFirst_.str()
        << reg_.str() <<
        "}\n"
        "\n"
        "}\n";

    out.close();
}

}
