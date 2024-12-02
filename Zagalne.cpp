/*1. Дано масив цілих чисел. Скориставшись покажчиками, поміняйте місцями елементи масиву
з парними й непарними індексами (тобто ті елементи масиву, які стоять на парних місцях,
поміняйте з елементами, які стоять на непарних місцях).
2. Дано два масиви, упорядковані за зростанням: А[n] та B[m]. Сформуйте масив C[n+m],
що складається з елементів масивів А і В, упорядкований за зростанням.
Використовуйте синтаксис покажчиків.
3. Дано два масиви: А[n] і B[m].
Необхідно створити третій масив, у якому потрібно зібрати:
■ Елементи обох масивів;
■ Загальні елементи двох масивів;
■ Елементи масиву A, які не включаються до B;
■ Елементи масиву B, які не включаються до A;
■ Елементи масивів A і B, які не є загальними для них (тобто об'єднання результатів двох попередніх варіантів).
Обов'язково використовуйте синтаксис покажчиків для цього завдання.*/
#include "Zagalne.h"
#include "Zadacha1.h"
#include "Zadacha2.h"
#include "Zadacha3.h"

void Random()
{
	srand(time(NULL));
}

void Masuv_random(int *par, const int *pn)
{
	for (int i = 0; i < *pn; i++) {
		*(par + i) = rand() % 50 - 25;
	}
}

void Show_masuv(int* par, const int* pn)
{
	for (int i = 0; i < *pn; i++) {
		Show(*(par + i));
		Show(' ');
	}
	Show('\n');
}

void Vubir_Zadachu()
{
	std::cout << "Oberite zadachu:\n"
		<< "1. Zmina mistsamu chusel;\n"
		<< "2. Z dvoh - odun masuv;\n"
		<< "3. Dii z tretim masuvom;\n"
		<< "4. Vuhid\n";
}

void Switch_Zadachu(int *ps, int* par, int* par2, int* par3, const int* pn, const int* pm, const int* pnm)
{
	switch (*ps) {
	case 1: Zmina_mistsamu_chusel(par, pn); break;
	case 2: Z_dvoh_odun_masuv(par, par2, par3, pn, pm, pnm); break;
	case 3: Dii_z_tretim_masuvom(par, par2, par3, pn, pm, pnm); break;
	case 4:break;
	default: Default;
	}
}
