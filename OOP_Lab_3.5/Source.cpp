#include <iostream>
#include <Windows.h>
#include "Polinom.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Polinom a(6);
	cin >> a;
	cout << a;

	cout << "�������� ������� ��� �������� �������� �: " << a.Obchyslyty(a) << endl;
	a.Differ(a);
	cout << "���������������: " << a << endl;

	Polinom b(4);
	cin >> b;
	cout << b;

	cout << "�������� ������� ��� �������� �������� �: " << b.Obchyslyty(b) << endl;
	b.Integr(b);
	cout << "������������: " << b << endl;
	if (a < b == true)
		cout << "����� ����� ����� �� �����" << endl;
	if (a <= b == true)
		cout << "����� ����� ����� ��� ���� �������" << endl;
	if (a > b == true)
		cout << "����� ����� ����� �� �����" << endl;
	if (a >= b == true)
		cout << "����� ����� ����� ��� ���� �������" << endl;
	if (a == b == true)
		cout << "����� � ����� ����� ����" << endl;
	if (a != b == true)
		cout << "����� � ����� ����� �� ����" << endl;

}