#include "stdafx.h"
#include "GLTools.h"


string GLTools::ws2s(const wstring& ws)
{
	_bstr_t t = ws.c_str();
	char* pchar = (char*)t;
	string result = pchar;
	return result;
}

wstring GLTools::s2ws(const string& s)
{
	_bstr_t t = s.c_str();
	wchar_t* pwchar = (wchar_t*)t;
	wstring result = pwchar;
	return result;
}

char* GLTools::w2c(char * pcstr, const wchar_t * pwstr, size_t len)
{
	return nullptr;
}


void GLTools::c2w(wchar_t * pwstr, size_t len, const char *str)
{
}
