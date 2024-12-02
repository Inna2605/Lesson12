/*1. ���� ����� ����� �����. ������������� �����������, �������� ������ �������� ������ 
� ������� � ��������� ��������� (����� � �������� ������, �� ������ �� ������ �����, 
�������� � ����������, �� ������ �� �������� �����).*/
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