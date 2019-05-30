#include "cmath"
#include <iostream>
#include <stdio.h>
#include "locale.h"

using namespace std;

bool IsInArea(double x, double y) {
	if (((-1 <= x <= 0) && (-1 <= y <= 0)) || ((pow(x, 2) + pow(y, 2) <= 1) && (0 <= x <= 1) && (0 <= y <= 1))) {
		return 1;
	}
	else { return 0; }
};
double f(double x)
{
	if (x <= 3)
		return pow(x, 2) - 3 * x + 9;
	else
		return 1 / (pow(x, 3) + 6);
}

int main() 
{
	setlocale(LC_ALL, "Russian");
	int WhatYouWant;
	cout << "Выберите задание. 1 или 2 : ";
	cin >> WhatYouWant;
	switch (WhatYouWant) {
	case 1:{
		double x, y;
		cout <<"Введите х: " << "\n";
		cin >> x;
		cout << "Введите y: " << "\n";
		cin >> y;
		cout << IsInArea(x, y) << "\n";
		break;
	}
	case 2: {
		double x;
		cout << "Введите х: " << "\n";
		cin >> x;
		cout << f(x);
		break;
	}
	}
	system("pause");
}

