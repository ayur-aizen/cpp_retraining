#pragma once
#ifndef STRING_CLASS
#define STRING_CLASS

#include <iostream>
#include <string>
#include <stdlib.h>
class LCString {
private:
	char *str;
	wchar_t *wstr;
	unsigned int size;
	void Error(int errorType, int badIndex =0) const;
public:
	//constructors
	LCString();
	LCString(char *s ="");
	LCString(wchar_t *s =L"");
	LCString(const LCString& s);
	
	~LCString(void);

	LCString& operator= (const LCString& s );
	LCString& operator= (char *s);
	LCString& operator= (wchar_t *s);





};
#endif 