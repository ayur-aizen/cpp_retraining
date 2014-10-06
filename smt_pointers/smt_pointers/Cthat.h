#pragma once

class Cthat
{
public:
	Cthat(void);
	void doIt(void){return;};
	~Cthat(void);
};
class CPthat
{
private:
	Cthat* aThat;
public:
	CPthat(Cthat* _that=NULL):aThat(_that){};
	~CPthat(){ if (aThat) delete aThat;};
	operator Cthat* (){return aThat;}; // �������� �������������� ����
	Cthat* operator->() {return aThat;}; // �������� ��������� ->
	CPthat operator+(ptrdiff_t _offset) {return CPthat(aThat+_offset);};
};