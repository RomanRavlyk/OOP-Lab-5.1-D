#include <iostream>
#include "VectorN.h"
using namespace std;

int main()
{
	Pair p1;
	Pair p2;

	cin >> p1;
	cout << p1;
	cin >> p2;
	cout << p2;

	cout << "> ";
	if (p1 > p2) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "< ";
	if (p1 < p2) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "== ";
	if (p1 == p2) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << ">= ";
	if (p1 >= p2) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "<= ";
	if (p1 <= p2) { cout << "yes"; }
	else cout << "no" << endl;
	cout << "!= ";
	if (p1 != p2) { cout << "yes" << endl; }
	else cout << "no" << endl;

	VectorN vector;

	VectorN vector1;

	cin >> vector;
	cout << vector;
	cin >> vector1;
	cout << vector1;

	cout << "Vector 1 length: " << ~vector << endl;



	cout << "Are vectors equal?: ";
	if (vector == vector1) { cout << "yes" << endl; }
	else cout << "no" << endl;

	cout << "Are vector1 > vector2: ";
	if (vector > vector1) { cout << "yes" << endl; }
	else cout << "no" << endl;

	cout << "Are vector1 < vector2: ";
	if (vector < vector1) { cout << "yes" << endl; }
	else cout << "no" << endl;

	cout << "Are vectors length equal?: ";
	if (vector != vector1) { cout << "no" << endl; }
	else cout << "yes" << endl;

	cout << "Are vector1 length > vector2 length: ";
	if (vector >= vector1) { cout << "yes" << endl; }
	else cout << "no" << endl;

	cout << "Are vector1 length < vector2 length: ";
	if (vector <= vector1) { cout << "yes" << endl; }
	else cout << "no" << endl;

	int x;
	cout << "Enter scal: "; cin >> x;
	vector* x;
	cout << "vector 1 after scalar mult: " << vector;

	return 0;
}

