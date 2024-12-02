/*1. ƒано масив ц≥лих чисел. —користавшись покажчиками, пом≥н€йте м≥сц€ми елементи масиву 
з парними й непарними ≥ндексами (тобто т≥ елементи масиву, €к≥ сто€ть на парних м≥сц€х, 
пом≥н€йте з елементами, €к≥ сто€ть на непарних м≥сц€х).*/
#include "Zadacha1.h"

void Zmina_chusel(int* par, const int* pn);

void Zmina_mistsamu_chusel(int* par, const int* pn)
{
	Masuv_random(par, pn);
	std::cout << "Masuv:\n";
	Show_masuv(par, pn);
	Show('\n');
	Zmina_chusel(par, pn);
	std::cout << "Masuv zi zminamu:\n";
	Show_masuv(par, pn);
	Show('\n');
}

void Zmina_chusel(int* par, const int* pn)
{
	int k;
	int* pkp = nullptr, * pkn = nullptr;
	pkp = par;
	for (int i = 1; i < *pn; i++) {

		if (i % 2 == 0) {
			pkp = par + i;
			continue;
		}
		else pkn = par + i;
		
		k = *pkp;
		*pkp = *pkn;
		*pkn = k;

	}
}