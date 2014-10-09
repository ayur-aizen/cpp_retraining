// exceptions.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

void f()
{
	throw(Exception("fail!"));
}
void f1()
{
	throw(string("Ara-ra, exception!"));
}
int _tmain(int argc, _TCHAR* argv[])
{
	try
	{
		f();
		//f1();
	}catch(Exception& e)
	{
		cout<<"You trew an exception: "<<e.getMessage()<<endl;
		
	}
	try {
		f1();
	}catch(string& s)
	{
		cout<<"The exception was: "<<s<<endl;
	}
	return 0;
}

