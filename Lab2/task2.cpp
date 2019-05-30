#include "cmath"
#include <iostream>
#include <stdio.h>

using namespace std;

double f(double x)
{
	if (x <= 3)
		return pow(x, 2) - 3 * x + 9;
	else
		return 1 / (pow(x, 3) + 6);
}

int main()
{
	
	cout << f(16) << "\n";

	system("pause");
}