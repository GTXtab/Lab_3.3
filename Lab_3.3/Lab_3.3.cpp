// Lab_03_3.cpp
// Малаховський Назар
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 20
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	// розгалуження в повній формі
	if (x <= 0)
		y = 2 - (1. / 2.) * x;
	else
		if (0 < x && x <= R)
			y = R - sqrt(R * R - x * x);
		else
			if (R < x && x <= 2 * R)
				y = sqrt(R * R - (x - R) * (x - R));
				else
					y = -(x - 2 * R) / (6 - 2 * R);
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}
