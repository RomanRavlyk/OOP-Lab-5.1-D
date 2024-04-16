#include <iostream>
#include "Pair.h"
#include <sstream>
using namespace std;

Pair::Pair() {
	int1 = 0;
	int2 = 0;
}

Pair::Pair(int value, int value1) {
	try {
		if (value < 0 || value == 0) {
			throw value;
		}
		if (value1 < 0 || value1 == 0) {
			throw value1;
		}
		int1 = value;
		int2 = value1;
	}
	catch (int) {
		cout << "Your numbers cannot = 0, or be less than 0";
		exit(0);
	}
}

Pair::Pair(const Pair& p) {

	try {
		if (int1 < 0 || int1 == 0) {
			throw int1;
		}
		if (int2 < 0 || int2 == 0) {
			throw int2;
		}
		int1 = p.int1;
		int2 = p.int2;
	}
	catch (const std::pair<int, int>& pair) {
		cout << "Your numbers cannot = 0, or be less than 0";
		exit(0);
	}
}



bool operator >=(const Pair& p1, const Pair& p2) {
	return (p1.int1 > p2.int1) || (p1.int1 == p2.int1 && p1.int2 >= p2.int2);
}

bool operator <=(const Pair& p1, const Pair& p2) {
	return (p1.int1 < p2.int1) || (p1.int1 == p2.int1 && p1.int2 <= p2.int2);
}

bool operator !=(const Pair& p1, const Pair& p2) {
	return !(p1 == p2);
}

bool operator >(const Pair& p1, const Pair& p2) {
	return !(p1 <= p2);
}

bool operator <(const Pair& p1, const Pair& p2) {
	return !(p1 >= p2);
}

bool operator ==(const Pair& p1, const Pair& p2) {
	return p1.int1 == p2.int1 && p1.int2 == p2.int2;
}

ostream& operator << (ostream& out, const Pair& r)
{
	out << string(r);
	return out;
}
istream& operator >> (istream& in, Pair& r)
{
	try {
		cout << "Enter int1: ";
		in >> r.int1;
		cout << "Enter int2: ";
		in >> r.int2;
		if (r.int1 < 0 || r.int1 == 0) {
			throw r.int1;
		}
		if (r.int2 < 0 || r.int2 == 0) {
			throw r.int2;
		}
		cout << endl;
		return in;
	}
	catch (int) {
		cout << "Your numbers cannot = 0, or be less than 0";
		exit(0);

	}
}

Pair::operator string() const {
	stringstream ss;
	ss << "Your integers: ";
	ss << int1 << " " << int2;
	ss << endl;
	return ss.str();
}
