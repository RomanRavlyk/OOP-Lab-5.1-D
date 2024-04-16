#pragma once
#include <iostream>
using namespace std;

class Pair {
private:
	int int1;
	int int2;
public:
	Pair();
	Pair(int, int);
	Pair(const Pair&);
	~Pair() {};

	int getInt1() const { return int1; };
	int getInt2() const { return int2; };
	void setInt1(int value) { int1 = value; };
	void setInt2(int value) { int2 = value; };

	friend bool operator ==(const Pair& int1, const Pair& int2);
	friend bool operator >(const Pair& int1, const Pair& int2);
	friend bool operator <(const Pair& int1, const Pair& int2);
	friend bool operator !=(const Pair& int1, const Pair& int2);
	friend bool operator >=(const Pair& int1, const Pair& int2);
	friend bool operator <=(const Pair& int1, const Pair& int2);

	friend ostream& operator << (ostream&, const Pair&);
	friend istream& operator >> (istream&, Pair&);
	operator string() const;
};