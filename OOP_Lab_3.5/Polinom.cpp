#include "Polinom.h"
#include <string>
#include <sstream>
#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

Polinom::Polinom()
	: Array()
{}
Polinom::Polinom(int n)
	: Array(n)
{}
Polinom::Polinom(Polinom& a)
	: Array(a)
{}

ostream& operator << (ostream& out, const Polinom& sd)
{
	out << (string)sd;
	return out;
}
istream& operator >> (istream& in, Polinom& sd)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Введіть число x: ";
	in >> sd.x;
	return in;
}
Polinom::operator string () const
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	stringstream ss;
	ss << "число x: " << x << endl;
	ss << "коефіцієнт: " << getCount() << endl;
	ss << "Масив : {";
	for (int i = 0; i <= getCount(); i++)
	{
		ss << getM(i) << ", ";
	}
	ss << "} " << endl;
	return ss.str();
}
Polinom& Polinom::operator = (const Polinom& sd)
{
	this->setCount(sd.getCount());
	return *this;
}
const char Polinom::operator [] (int i) const
{
	return getM(i);
}

bool operator < (Polinom a, Polinom b) {
	return a.getCount() < b.getCount();
}
bool operator <= (Polinom a, Polinom b) {
	return a.getCount() <= b.getCount();
}
bool operator > (Polinom a, Polinom b) {
	return a.getCount() > b.getCount();
}
bool operator >= (Polinom a, Polinom b)
{
	return a.getCount() >= b.getCount();
}
bool operator == (Polinom a, Polinom b) {
	return a.getCount() == b.getCount();
}
bool operator != (Polinom a, Polinom b) { return !operator ==(a, b); }

double Polinom::Obchyslyty(Polinom& a)
{
	double result = 0;
	int x = a.getX();
	for (int i = 0; i <= a.getCount(); i++)
	{
		int y = a.getM(i);
		result += x * y;
	}
	return result;
}
Polinom Polinom::Differ(Polinom& a)
{
	double y = 0;
	for (int i = 0; i <= a.getCount() + 1; i++)
	{
		y = a.getM(i) * i;
		a.setM(i, y);
	}
	for (int i = 1; i <= a.getCount() + 1; i++)
	{
		a.setM(i - 1, a.getM(i));
	}
	return a;
}
Polinom Polinom::Integr(Polinom& a)
{
	int tmp[100];
	for (int i = 1; i <= a.getCount() + 1; i++)
	{
		a.setM(i, a.getM(i)* i);
		tmp[i] = a.getM(i - 1);
	}
	for (int i = a.getCount() - 1; i >= 0; i--)
	{
		a.setM(i, a.getM(i - 1));
	}
	for (int i = 0; i <= a.getCount() + 1; i++)
	{
		a.setM(i, tmp[i]);
	}
	a.setM(0, 0);
	return a;
}