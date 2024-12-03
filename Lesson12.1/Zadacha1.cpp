//1. Використовуючи покажчики й оператор розіменування, визначити найбільше з двох чисел.
#include "Zadacha1.h"
#define Max(a, b) (*a > *b) ? *a : *b;

void Naibilse_chuslo(int *a, int *b)
{
	std::cout << "Z dvox chusel ";
	*a = Random_chusla;
	Show(*a);
	std::cout << " ta ";
	*b = Random_chusla;
	Show(*b);
	std::cout << " naibilse chuslo: ";
	int d = Max(a, b);
	Show(d);
	Show('\n');
}
