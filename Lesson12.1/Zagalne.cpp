/*1. �������������� ��������� � �������� ������������, ��������� �������� � ���� �����.
2. �������������� ��������� � �������� ������������, ��������� ���� �����, ��������� � ���������.
3. �������������� ��������� � �������� ������������, ������� ������ �������� ���� ������.
4. �������� ���������� �����������, ������������ ����� �����������.
5. �������������� �������� �� ����� ����� �����, ���������� ���� �������� ������.
��������������� � ������� ���������� ��������� ��� ���������� �� ������, � ����� �������� ������������.*/
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
