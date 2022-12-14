// Lab_05_1.cpp
// Лазар Владислав
// Лабораторна робота No 5.1
// Функції, що містять арифметичний вираз
// Варіант 11

#include <iostream>
#include <cmath>

using namespace std;

double g(const double a, const double b);

int main()
{
	double s, t;

	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;

	double u = (g(1, s) + (1 + pow(g(t, 1), 2))) / (1 + pow(g(s + t, 1), 3));

	cout << "u = " << u << endl;

	return 0;
}

double g(const double a, const double b)
{
	return a * a + a * b + b * b;
}