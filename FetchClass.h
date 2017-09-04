#pragma once
class FetchClass
{
protected:
	int* myArray;
public:
	FetchClass();
	virtual void setArray(int*&);
	virtual int* getArray();
	virtual void showArray();
	virtual void showFetch(int);
	virtual void showArray(int*&);
	virtual int* RandomArray(int);
};

