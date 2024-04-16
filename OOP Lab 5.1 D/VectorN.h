#pragma once
#include "Pair.h"

class VectorN : public Pair {
private:
	static const int MAX_SIZE = 100;
	int size;
	int vector[MAX_SIZE];
public:
	VectorN();
	VectorN(int);
	VectorN(const VectorN& vector);
	~VectorN() {};
	friend double operator~(const VectorN& vec);
	friend VectorN operator*(VectorN& vec, int value);
	int getElem(int value) const { return vector[value]; }
	void setElem(int index, int value) { vector[index] = value; }
	int getSize() const { return size; };
	void setSize(int value) { size = value; };
	friend bool operator ==(const VectorN& int1, const VectorN& int2);
	friend bool operator >(const VectorN& int1, const VectorN& int2);
	friend bool operator <(const VectorN& int1, const VectorN& int2);
	friend bool operator !=(const VectorN& int1, const VectorN& int2);
	friend bool operator >=(const VectorN& int1, const VectorN& int2);
	friend bool operator <=(const VectorN& int1, const VectorN& int2);
	friend ostream& operator << (ostream&, const VectorN&);
	friend istream& operator >> (istream&, VectorN&);
	operator string() const;
};