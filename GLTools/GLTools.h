#pragma once

#include <string>  
#include <comutil.h>  
#pragma comment(lib, "comsuppw.lib")  

using namespace std;

namespace GLTools
{
	string ws2s(const wstring& ws);
	wstring s2ws(const string& s);

	char *w2c(char *pcstr, const wchar_t *pwstr, size_t len);
	void c2w(wchar_t *pwstr, size_t len, const char *str);
}


