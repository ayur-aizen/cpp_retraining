#include "StdAfx.h"
#include "LCString.h"

void LCString::Error(int errorType, int badIndex) const
{
}

LCString::LCString(char* s)
{
	size=strlen(s) +1;
	str = new char[size];
	//if (str==NULL) Error(outOfMemery);
	strcpy(str,s);
}

LCString::LCString(wchar_t* s)
{
}

LCString::LCString(void)
{
}

LCString::~LCString(void)
{
}

LCString& LCString::operator=(LCString const& s)
{
}

LCString& LCString::operator=(char* s)
{
}

LCString& LCString::operator=(wchar_t* s)
{
}

LCString::LCString(LCString const& s)
{
}