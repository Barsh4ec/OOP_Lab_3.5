#include "Array.h"
#include <string>
#include <sstream>
#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

Array::Array()
{
	count = 0;
	m = 0;
}
Array::Array(int n)
{
	if (RangeCheck(n))
	{
		this->count = n;
		m = new int[size];
		for (int i = 0; i <= size; i++)
			m[i] = i;
	}
	else
		cerr << "wrong argument to constructor";
}
Array::Array(Array& a)
{
	count = a.count;
	m = a.m;
}
const int Array::operator [] (int i) const
{
	return m[i];
}
Array& Array::operator = (const Array& sd)
{
	this->count = sd.count;
	this->m = sd.m;
	return *this;
}
bool Array::RangeCheck(const int n)
{
	if (n < 0 || n > 100)
		return false;
	else 
		return true;
}