#include <iostream>
#include "SecuencialClass.h"
#include "BinariClass.h"

int main() {

	std::cout << "Binary Search" << std::endl;

	BinariClass test;
	std::cout << "Enter the size of your array: ";
	int a;
	std::cin >> a;
	test.setArray(test.RandomArray(a));
	test.showArray();
	std::cout << "Enter the number you are searching for (1 to 10): ";
	int b;
	std::cin >> b;
	test.showFetch(test.bFetch(b));
	test.showArray();
}