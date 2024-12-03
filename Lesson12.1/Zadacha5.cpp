/*5. Використовуючи покажчик на масив цілих чисел, порахувати суму елементів масиву.
Використовувати в програмі арифметику покажчиків для просування по масиву, а також оператор розіменування.*/
#include "Zadacha5.h"

void Random_masuv(int* Ar, const int* N);
void Show_masuv(int* Ar, const int* N);
int Suma(int* Ar, const int* N);

void Suma_elementiv()
{
	const int N = 30;
	int Ar[N];
	const int *pN = &N;
	Random;
	Random_masuv(Ar, pN);
	Show_masuv(Ar, pN);
	int S = Suma(Ar, pN);
	std::cout << "Suma vsux elementiv masuva: ";
	Show(S);
	Show('\n');
}

void Random_masuv(int* Ar, const int* N)
{
	for (int i = 0; i < *N; i++) {
		*(Ar + i) = rand() % 60 - 30;
	}
}

void Show_masuv(int* Ar, const int* N)
{
	for (int i = 0; i < *N; i++) {
		Show(*(Ar + i));
		std::cout << ' ';
	}
	Show('\n');
}

int Suma(int* Ar, const int* N)
{
	int Sum = *Ar;
	for (int i = 1; i < *N; i++) {
		Sum += *(Ar + i);
	}
	return Sum;
}
