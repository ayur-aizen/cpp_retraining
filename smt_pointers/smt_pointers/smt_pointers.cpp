// smt_pointers.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	Cthat* aThat = new Cthat;
	aThat->doIt();

	CPthat pthat(new Cthat);
	pthat->doIt();
	
	static_cast<Cthat*>(pthat)->doIt();

	delete aThat;

	return 0;
}

