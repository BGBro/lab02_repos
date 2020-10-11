// Lab_02.cpp
// Горбачов Богдан
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 3

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a;
	double z1;
	// double z2;
	cout << "a = "; cin >> a;
	z1 = (sin(2 * a) + sin(5 * a) - sin(3 * a)) / (cos(a) + 1 - 2 * pow(sin(2 * a), 2));
	// z2 = 2 * sin(a);
	cout << endl;
	cout << "z1 = " << z1 << endl;
	// cout << "z2 = " << z2 << endl;
}
