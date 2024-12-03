//2. Використовуючи покажчики й оператор розіменування, визначити знак числа, введеного з клавіатури.
#include "Zadacha2.h"

void Znak(int* px);

void Znak_chusla()
{
	int x;
	int *px = &x;
	std::cout << "Vvedite chuslo z dovilnum znakom: ";
	Vvod(*px);
	Show('\n');
	Znak(px);
	Show('\n');
}

void Znak(int* px)
{
	if (*px >= 0) {
		std::cout << "Chuslo ";
		Show(*px);
		std::cout << " dodatne!";
	}
	else {
		std::cout << "Chuslo ";
		Show(*px);
		std::cout << " videmne!";
	}
}
