/*2. Дано два масиви, упорядковані за зростанням: А[n] та B[m]. Сформуйте масив C[n+m], 
що складається з елементів масивів А і В, упорядкований за зростанням. 
Використовуйте синтаксис покажчиків.*/
#include "Zadacha2.h"

void Sortyvanna_za_zrostannam(int* par, const int* pn);

void Z_dvoh_odun_masuv(int* par, int* par2, int* par3, const int* pn, const int* pm, const int* pnm)
{
	std::cout << "Persui masuv:\n";
	Masuv_random(par, pn);
	Show_masuv(par, pn);
	std::cout << "Vporadkovanui persui masuv:\n";
	Sortyvanna_za_zrostannam(par, pn);
	Show_masuv(par, pn);
	Show('\n');

	std::cout << "Drugui masuv:\n";
	Masuv_random(par2, pm);
	Show_masuv(par2, pm);
	std::cout << "Vporadkovanui drugui masuv:\n";
	Sortyvanna_za_zrostannam(par2, pm);
	Show_masuv(par2, pm);
	Show('\n');

	std::cout << "Tretii masuv:\n";
	Tretii_masuv(par, par2, par3, pn, pm, pnm);
	Show_masuv(par3, pnm);
	std::cout << "Vporadkovanui tretii masuv:\n";
	Sortyvanna_za_zrostannam(par3, pnm);
	Show_masuv(par3, pnm);
	Show('\n');
}

void Sortyvanna_za_zrostannam(int* par, const int* pn)
{
	int k = 0, x = 0;
	for (int i = 0; i < *pn; i++) {
		k = i;
		x = *(par + i);
		for (int j = i + 1; j < *pn; j++) {
			if (*(par + j) < x) {
				k = j;
				x = *(par + j);
			}
		}
		if (k != i) {
			*(par + k) = *(par + i);
			*(par + i) = x;
		}
	}
}

void Tretii_masuv(int* par, int* par2, int* par3, const int* pn, const int* pm, const int* pnm)
{
	int d = 0;
	for (int i = 0; i < *pnm; i++) {
		if (i < *pn) {
			*(par3 + i) = *(par + i);
		}
		if (i >= *pn) {
			*(par3 + i) = *(par2 + d);
			d++;
		}
	}
}
