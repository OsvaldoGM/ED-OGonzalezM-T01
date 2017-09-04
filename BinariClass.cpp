#include "BinariClass.h"	
void BinariClass::binariClass()
{

}

int BinariClass::bFetch(int b)
{
	return bFetch(myArray, b);
}

int BinariClass::bFetch(int*& a, int b)
{
	int n = (sizeof(a) / 4);
	int centro, inicio = 0, fin = n - 1;
	while (inicio <= fin) {
		centro = (inicio + fin) / 2;
		if (a[centro] == b)
			return centro;
		if (b < a[centro]) {
			fin = centro - 1;
		}
		else {
			inicio = centro + 1;
		}
	}
	return -1;

}