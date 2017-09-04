#include "SortClass.h"
void SortClass::selection(int*& a)
{
	int menor, auxiliar;
	for (int i = 0; i<(sizeof(a) / 4); i++) {
		menor = i;
		for (int j = i + 1; j<(sizeof(a) / 4); j++) {
			if (a[j]<a[menor]) {
				menor = j;
			}
			if (i != menor) {
				auxiliar = a[i];
				a[i] = a[j];
				a[j] = auxiliar;
			}

		}
	}
}

void SortClass::insertion(int*& a)
{
	int j, auxiliar;
	for (int i = 1; i<(sizeof(a) / 2); i++) {
		auxiliar = a[i];
		j = i - 1;
		while ((j >= 0) && (a[j]>auxiliar)) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = auxiliar;
	}
}

void SortClass::bubble(int*& a)
{
	int i, j, auxiliar;
	for (i = 0; i < (sizeof(a) / 2) - 1; i++) {
		for (j = 0; j < (sizeof(a) / 2) - 1; j++) {
			if (a[j + 1]<a[j]) {
				auxiliar = a[j + 1];
				a[j + 1] = a[j];
				a[j] = auxiliar;
			}
		}

	}

}

void SortClass::quickSort(int*& a, int left, int right)
{
	int pivote = a[(left + right) / 2];
	int i = left;
	int j = right;
	int auxiliar;

	while (i<j) {
		while (a[i] <= pivote && i<j)
			i++;
		while (a[j]>pivote)
			j--;
		if (i<j) {
			auxiliar = a[i];
			a[i] = a[j];
			a[j] = auxiliar;
		}
	}
	a[left] = a[j];
	a[j] = pivote;
	if (left<j - 1)
		quickSort(a, left, j - 1);
	if (j + 1 <right)
		quickSort(a, j + 1, right);
}

void SortClass::mergeSort(int*& a, int left, int right)
{
	if (left < right) {
		int middle = left + (left - right) / 2;
		mergeSort(a, left, middle);
		mergeSort(a, middle + 1, right);
		merge(a, left, middle, right);
	}
}

void SortClass::merge(int*& a, int left, int middle, int right)
{
	int numero = (sizeof(a) / 4);
	int* auxiliar = new int[numero];

	for (int i = left; i <= right; i++) {
		auxiliar[i] = a[i];
	}

	int i = left;
	int j = middle + 1;
	int k = right;
	while (i <= middle && j <= right) {
		if (auxiliar[i] <= auxiliar[j]) {
			a[k] = auxiliar[i];
			i++;
		}
		else {
			a[k] = auxiliar[j];
			j++;
		}
		k++;
	}
	while (i <= middle) {
		a[k] = auxiliar[i];
		k++;
		i++;
	}
}