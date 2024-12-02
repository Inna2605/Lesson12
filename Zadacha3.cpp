/*3. Дано два масиви: А[n] і B[m]. 
Необхідно створити третій масив, у якому потрібно зібрати:
■ Елементи обох масивів;
■ Загальні елементи двох масивів;
■ Елементи масиву A, які не включаються до B;
■ Елементи масиву B, які не включаються до A;
■ Елементи масивів A і B, які не є загальними для них (тобто об'єднання результатів двох попередніх варіантів).
Обов'язково використовуйте синтаксис покажчиків для цього завдання.*/
#include "Zadacha3.h"
#include "Zadacha2.h"

int Zagalni(int* par, int* par2, int* par3, const int* pn, const int* pm, const int* pnm);
int A_ne_vklucheni_v_B(int* par, int* par2, int* par3, const int* pn, const int* pm, const int* pnm);
int B_ne_vklucheni_v_A(int* par, int* par2, int* par3, const int* pn, const int* pm, const int* pnm);
int Ne_zagalni(int* par, int* par2, int* par3, const int* pn, const int* pm, const int* pnm);

void Dii_z_tretim_masuvom(int* par, int* par2, int* par3, const int* pn, const int* pm, const int* pnm)
{
	std::cout << "Persui masuv:\n";
	Masuv_random(par, pn);
	Show_masuv(par, pn);
	Show('\n');

	std::cout << "Drugui masuv:\n";
	Masuv_random(par2, pm);
	Show_masuv(par2, pm);
	Show('\n');

	std::cout << "Tretii masuv:\n";
	Tretii_masuv(par, par2, par3, pn, pm, pnm);
	Show_masuv(par3, pnm);
	Show('\n');

	std::cout << "Zagalni elementu : \n";
	int x = Zagalni(par, par2, par3, pn, pm, pnm);
	int* px = &x;
	Show_masuv(par3, px);
	Show('\n');

	std::cout << "Elementu A ne vklucheni v B:\n";
	x = A_ne_vklucheni_v_B(par, par2, par3, pn, pm, pnm);
	Show_masuv(par3, px);
	Show('\n');

	std::cout << "Elementu B ne vklucheni v A:\n";
	x = B_ne_vklucheni_v_A(par, par2, par3, pn, pm, pnm);
	Show_masuv(par3, px);
	Show('\n');

	std::cout << "Ne zagalni elementu dla obox masuviv:\n";
	int z = Ne_zagalni(par, par2, par3, pn, pm, pnm);
	int* pz = &z;
	Show_masuv(par3, pz);
	Show('\n');
}

int Zagalni(int* par, int* par2, int* par3, const int* pn, const int* pm, const int* pnm)
{
	int n = 0, k = 0;
	for (int i = 0; i < *pn; i++) {
		for (int j = 0; j < *pm; j++) {
			if (*(par + i) == *(par2 + j)) {
				if (n != 0) {
					for (int l = 0; l < n; l++) {
						if (*(par + i) == *(par3 + l)) {
							k++;
						}
					}
				}
				if (k != 0) {
					break;
				}
				*(par3 + n) = *(par + i);
				n++;
				k = 0;
				break;
			}
		}
	}
	return n;
}

int A_ne_vklucheni_v_B(int* par, int* par2, int* par3, const int* pn, const int* pm, const int* pnm)
{
	int n = 0, k = 0, s;
	for (int i = 0; i < *pn; i++) {
		s = 0;
		for (int j = 0; j < *pm; j++) {
			if (*(par + i) == *(par2 + j)) {
				s++;
				break;
			}
		}
		if (s == 0) {
			if (n != 0) {
				for (int l = 0; l < n; l++) {
					if (*(par + i) == *(par3 + l)) {
						k++;
					}
				}
				if (k == 0) {
					*(par3 + n) = *(par + i);
					n++;
					k = 0;
				}
			}
			else {
				*(par3 + n) = *(par + i);
				n++;
				k = 0;
			}
		}
	}
	return n;
}

int B_ne_vklucheni_v_A(int* par, int* par2, int* par3, const int* pn, const int* pm, const int* pnm)
{
	int n = 0, k = 0, s;
	for (int i = 0; i < *pm; i++) {
		s = 0;
		for (int j = 0; j < *pn; j++) {
			if (*(par2 + i) == *(par + j)) {
				s++;
				break;
			}
		}
		if (s == 0) {
			if (n != 0) {
				for (int l = 0; l < n; l++) {
					if (*(par2 + i) == *(par3 + l)) {
						k++;
					}
				}
				if (k == 0) {
					*(par3 + n) = *(par2 + i);
					n++;
					k = 0;
				}
			}
			else {
				*(par3 + n) = *(par2 + i);
				n++;
				k = 0;
			}
		}
	}
	return n;
}

int Ne_zagalni(int* par, int* par2, int* par3, const int* pn, const int* pm, const int* pnm)
{
	int n = 0, k = 0, s;
	for (int i = 0; i < *pn; i++) {
		s = 0;
		for (int j = 0; j < *pm; j++) {
			if (*(par + i) == *(par2 + j)) {
				s++;
				break;
			}
		}
		if (s == 0) {
			if (n != 0) {
				for (int l = 0; l < n; l++) {
					if (*(par + i) == *(par3 + l)) {
						k++;
					}
				}
				if (k == 0) {
					*(par3 + n) = *(par + i);
					n++;
					k = 0;
				}
			}
			else {
				*(par3 + n) = *(par + i);
				n++;
				k = 0;
			}
		}
	}
	k = 0;
	for (int i = 0; i < *pm; i++) {
		s = 0;
		for (int j = 0; j < *pn; j++) {
			if (*(par2 + i) == *(par + j)) {
				s++;
				break;
			}
		}
		if (s == 0) {
			if (n != 0) {
				for (int l = 0; l < n; l++) {
					if (*(par2 + i) == *(par3 + l)) {
						k++;
					}
				}
				if (k == 0) {
					*(par3 + n) = *(par2 + i);
					n++;
					k = 0;
				}
			}
			else {
				*(par3 + n) = *(par2 + i);
				n++;
				k = 0;
			}
		}
	}
	return n;
}
