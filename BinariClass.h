#pragma once
#include "FetchClass.h"
#include "SortClass.h"

class BinariClass : public FetchClass, public SortClass
{
	void binariClass();
	int bFetch(int);
	static int bFetch(int*&, int);
};