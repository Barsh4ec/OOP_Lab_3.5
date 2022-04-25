#pragma once
#include "Array.h"
#include <sstream>
using namespace std;

class Polinom : public Array
{
private:
	int x;
public:
	Polinom();
	Polinom(int);
	Polinom(Polinom&);

	int getX() const { return x; }
	void setX(int value) { x = value; }
	int getCount() const { return Array::getCount(); }
	void setCount(int value) { Array::setCount(value); }
	int getM(int value) const { return Array::getM(value); }
	void setM(int i, int value) { Array::setM(i, value); }

	friend ostream& operator << (ostream&, const Polinom&);
	friend istream& operator >> (istream&, Polinom&);
	Polinom& operator = (const Polinom&);
	const char operator [] (int) const;
	operator string () const;

	friend bool operator < (Polinom x, Polinom y);
	friend bool operator <= (Polinom x, Polinom y);
	friend bool operator > (Polinom x, Polinom y);
	friend bool operator >=(Polinom x, Polinom y);
	friend bool operator == (Polinom x, Polinom y);
	friend bool operator != (Polinom x, Polinom y);

	double Obchyslyty(Polinom&);
	Polinom Differ(Polinom&);
	Polinom Integr(Polinom&);
};

