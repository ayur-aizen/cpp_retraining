
#pragma once
#include <iostream>


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
	CPthat(Cthat* _that= NULL):aThat(_that){};
	~CPthat(){ if (aThat) delete aThat;};
	operator Cthat* (){return aThat;}; // Оператор преобразования типа
	Cthat* operator->() {return aThat;}; // Оператор селектора ->
	CPthat operator+(ptrdiff_t _offset) {return CPthat(aThat+_offset);};
};

template <class T>
class sPointer
{
private:
	T* tObj;
public:
	sPointer(T* _t= nullptr):tObj(_t){};
	~sPointer(){if (tObj) delete tObj; };
	operator T*() {return tObj;}
	T* operator->() {
		if (!tObj)
	{
		std::cerr<<"NULL";
		tObj = new T;
	}
	return tObj;
	}


};