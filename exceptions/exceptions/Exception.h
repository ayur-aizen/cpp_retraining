#pragma once
#include "stdafx.h"
class Exception
{
public:
	Exception(const std::string& msg):msg_(msg){};
	~Exception(void);
	std::string getMessage() const {return(msg_);}
private:
	std::string msg_;
};
