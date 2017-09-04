#pragma once
#include "FetchClass.h"
class SecuencialClass : public FetchClass
{
	void secuencialClass();
	int sFetch(int);
	static int  sFetch(int*&, int);
};