// Lab_03_3.cpp
// < Кульчицька Софія Олександрівна >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 7
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
	if (x <= R)
		y = R;
	else
		if ( R < x && x <= 0)
			y = R - sqrt(R * R - x * x);
		else
			if (0 < x && x <= R)
				y = R - sqrt(R * R - x * x);
			else
				if (R < x && x <=6)
					y = R + (-3-R)/(6-R)*(x-R);
				else
					y = -3*x+18;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}