//4. Написати примітивний калькулятор, користуючись тільки покажчиками.
#include "Zadacha4.h"

void Vubir_dii();
void Svitch_kalkylator(char* x, int* a, int* b, int* c);
void Dodavanna(int* a, int* b, int* c);
void Vidnimanna(int* a, int* b, int* c);
void Mnozenna(int* a, int* b, int* c);
void Dilenna(int* a, int* b, int* c);
void Stepin(int* a, int* b, int* c);
void Vidsotok(int* a, int* b, int* c);

void Kalkylator(int* a, int* b)
{
	int c;
	int* pc = &c;
	char x;
	char* px = &x;
	std::cout << "Vvedite perse chuslo: ";
	Vvod(*a);
	std::cout << "Vvedite dryge chuslo: ";
	Vvod(*b);
	Show('\n');
	while (true) {
		Vubir_dii();
		Vvod(*px);
		if (*px == 'v' || *px == 'V')break;
		Svitch_kalkylator(px, a, b, pc);
		Show('\n');
	}
}

void Vubir_dii()
{
	std::cout << "Oberite diy:\n"
		<< "+ - dodavanna chusel;\n"
		<< "- - vidnimanna chisel;\n"
		<< "* - mnozenna chisel;\n"
		<< "/ - dilenna chisel;\n"
		<< "^ - vozvedenna v stepin;\n"
		<< "% - znaxodzenna vidsotka;\n"
		<< "v - Vuxid\n";
}

void Svitch_kalkylator(char* x, int* a, int* b, int *c)
{
	switch (*x) {
	case '+': Dodavanna(a, b, c); break;
	case '-': Vidnimanna(a, b, c); break;
	case '*': Mnozenna(a, b, c); break;
	case '/': Dilenna(a, b, c); break;
	case '^': Stepin(a, b, c); break;
	case '%': Vidsotok(a, b, c); break;
	case 'v': break;
	default:Default;
	}
	Show('\n');
}

void Dodavanna(int* a, int* b, int *c)
{
	*c = *a + *b;
	Show(*a);
	std::cout << " + ";
	Show(*b);
	std::cout << " = ";
	Show(*c);
}

void Vidnimanna(int* a, int* b, int* c)
{
	int *k;
	if (*b > *a) {
		Zmina(a, b);
	}
	*c = *a - *b;
	Show(*a);
	std::cout << " - ";
	Show(*b);
	std::cout << " = ";
	Show(*c);
}

void Mnozenna(int* a, int* b, int* c)
{
	*c = (*a) * (*b);
	Show(*a);
	std::cout << " * ";
	Show(*b);
	std::cout << " = ";
	Show(*c);
}

void Dilenna(int* a, int* b, int* c)
{
	float fa = *a, fb = *b, fc = *c;
	float* pa = &fa, * pb = &fb, * pc = &fc;
	float *k;
	if (*pb > *pa) {
		k = pa;
		pa = pb;
		pb = k;
	}
	*pc = *pa / *pb;
	Show(*pa);
	std::cout << " / ";
	Show(*pb);
	std::cout << " = ";
	Show(*pc);
}

void Stepin(int* a, int* b, int* c)
{
	*c = *a;
	for (int i = 0; i < *b; i++) {
		*c *= *a;
	}
	Show(*a);
	std::cout << " v stepeni ";
	Show(*b);
	std::cout << " = ";
	Show(*c);
}

void Vidsotok(int* a, int* b, int* c)
{
	float fa = *a, fb = *b, fc = *c;
	float* pa = &fa, * pb = &fb, * pc = &fc;
	*pc = ((*pa) * (*pb)) / 100;
	Show(*pb);
	std::cout << " vidsotkiv vid ";
	Show(*pa);
	std::cout << " = ";
	Show(*pc);
}
