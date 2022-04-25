#pragma once
using namespace std;
class Array
{
private:
	static const int size = 100;
	int count;
	int* m;
public:
	Array();
	Array(int);
	Array(Array&);

	int getCount() const { return count; }
	void setCount(int value) { count = value; }
	int getM(int value) const { return m[value]; }
	void setM(int i, int value) { m[i] = value; }

	bool RangeCheck(const int);

	Array& operator = (const Array&);
	const int operator [] (int) const;
};

