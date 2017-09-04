#include <iostream>
#include <stdio.h>
#include "FetchClass.h"
#include <time.h>
#include <string>
using namespace std;

FetchClass::FetchClass()
{

}

void FetchClass::setArray(int*& a)
{
	myArray = a;
}

int* FetchClass::getArray()
{
	return myArray;
}

void FetchClass::showArray(int*& a)
{
	for (int i = 0; (i<sizeof(a)/2); i ++) {
		std::cout <<"Arreglo [ " <<a[i] << " ]" << std::endl;
	}		
}

void FetchClass::showArray()
{
	showArray(myArray);
}

void FetchClass::showFetch(int a)
{
	if (a == -1) {
		std::cout << ("El numero que esta buscando no se encuentra en el arreglo");
	}else {
		std::cout << ("El numero que esta buscando esta en la posicion " + a);
	}
}

int* FetchClass::RandomArray(int a) {
	srand(time(NULL));
	int* auxiliar = new int[a];
	for (int i = 0; i<a ; i++) {
		auxiliar[i] = (rand() % 125 + 1);
	} 
	return auxiliar;
}
