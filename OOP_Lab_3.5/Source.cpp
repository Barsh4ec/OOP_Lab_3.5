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

	cout << "Значення поліному для заданого значення х: " << a.Obchyslyty(a) << endl;
	a.Differ(a);
	cout << "Диференціювання: " << a << endl;

	Polinom b(4);
	cin >> b;
	cout << b;

	cout << "Значення поліному для заданого значення х: " << b.Obchyslyty(b) << endl;
	b.Integr(b);
	cout << "Інтегрування: " << b << endl;
	if (a < b == true)
		cout << "перше число менше за друге" << endl;
	if (a <= b == true)
		cout << "перше число менше або рівне другому" << endl;
	if (a > b == true)
		cout << "перше число більше за друге" << endl;
	if (a >= b == true)
		cout << "перше число більше або рівне другому" << endl;
	if (a == b == true)
		cout << "перше і друге число рівне" << endl;
	if (a != b == true)
		cout << "перше і друге число не рівне" << endl;

}