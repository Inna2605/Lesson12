/*1. Використовуючи покажчики й оператор розіменування, визначити найбільше з двох чисел.
2. Використовуючи покажчики й оператор розіменування, визначити знак числа, введеного з клавіатури.
3. Використовуючи покажчики й оператор розіменування, поміняти місцями значення двох змінних.
4. Написати примітивний калькулятор, користуючись тільки покажчиками.
5. Використовуючи покажчик на масив цілих чисел, порахувати суму елементів масиву.
Використовувати в програмі арифметику покажчиків для просування по масиву, а також оператор розіменування.*/
#include "Zagalne.h"
#include "Zadacha1.h"
#include "Zadacha2.h"
#include "Zadacha3.h"
#include "Zadacha4.h"
#include "Zadacha5.h"
using namespace std;

void Vubir_zadachu()
{
	cout << "Oberite zadachy:\n"
		<< "1. Naibilse chuslo\n"
		<< "2. Znak chusla\n"
		<< "3. Zmina miscamu\n"
		<< "4. Kalkylator\n"
		<< "5. Suma elementiv\n"
		<< "6. Vuxid\n";
}

void Switch_zadachu(int a, int *x, int*y)
{
	switch (a) {
	case 1: Naibilse_chuslo(x, y); break;
	case 2: Znak_chusla(); break;
	case 3: Zmina_miscamu(x, y); break;
	case 4: Kalkylator(x, y); break;
	case 5: Suma_elementiv(); break;
	case 6:break;
	default:Default;
	}
}
