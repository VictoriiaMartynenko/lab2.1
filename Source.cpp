// Lab_02.cpp
// < Мартиненко Вікторія  >
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 21
#include <iostream>
using namespace std;
int main()
{
	double Pi = 4 * atan(1.);
	double x; // вхідний параметр
	// double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу
	cout << "x = "; cin >> x;
	// z1 = 2 * (pow(sin(3 * Pi - 2 * x), 2) * pow(cos(5 * Pi + 2 * x), 2));
	z2 = 0.25 - (sin((5 * Pi) / 2 - (8 * x))) / 4;
	cout << endl;
	// cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}