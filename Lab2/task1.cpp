#include "cmath"
#include <iostream>
#include <stdio.h>

using namespace std;

 bool IsInArea(double x, double y) {
	if (((-1 <= x <= 0) && (-1 <= y <= 0)) || ((pow(x, 2) + pow(y, 2) <= 1) && (0 <= x <= 1) && (0 <= y <= 1))) {
		return 1;
	} else { return 0; }
};

int main()
{
	cout << IsInArea(-0.9, -0.1) << "\n";
	system("pause");
}