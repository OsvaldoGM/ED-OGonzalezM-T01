#include "SecuencialClass.h"
void SecuencialClass::secuencialClass() 
{

}

int SecuencialClass::sFetch(int b)
{
	return sFetch(myArray, b);
}

int SecuencialClass::sFetch(int*& a, int b)
{
	for (int i = 0; i < (sizeof(a)/4); i++) { 
		if (a[i] == b) {
			return i;
		}
	}
	return -1;
}

