//3. ¬икористовуючи покажчики й оператор роз≥менуванн€, пом≥н€ти м≥сц€ми значенн€ двох зм≥нних.
#include "Zadacha3.h"

void Zmina_miscamu(int* a, int* b)
{
	std::cout << "Zminna A = ";
	*a = Random_chusla;
	Show(*a);
	std::cout << " ta zminna B = ";
	*b = Random_chusla;
	Show(*b);
	Show('\n');
	Zmina(a, b);
	std::cout << "Pisla zminu miscamu:\n"
		<< "Zminna A = ";
	Show(*a);
	std::cout << " ta zminna B = ";
	Show(*b);
	Show('\n');
}

void Zmina(int* a, int* b)
{
	int *k = a;
	a = b;
	b = k;
}
