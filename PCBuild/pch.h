#pragma once
#include <string>

std::string ucs2_to_utf8(const std::wstring&);
std::string ucs2_to_utf8(const wchar_t*);
std::wstring utf8_to_ucs2(const std::string&);
std::wstring utf8_to_ucs2(const char*);

