#include "pch.h"
#include <codecvt>

std::wstring_convert<std::codecvt_utf8<wchar_t>, wchar_t> ucs2conv;

std::string ucs2_to_utf8(const std::wstring& ucs2_string)
{
    return ucs2conv.to_bytes(ucs2_string);
}

std::string ucs2_to_utf8(const wchar_t* ucs2_string)
{
    return ucs2conv.to_bytes(ucs2_string);
}

std::wstring utf8_to_ucs2(const std::string& utf8_string)
{
    return ucs2conv.from_bytes(utf8_string);
}

std::wstring utf8_to_ucs2(const char* utf8_string)
{
    return ucs2conv.from_bytes(utf8_string);
}
