/*
Write a Program to Calculate the Greatest Common Divisor of Two Numbers
*/

#include <iostream>
using namespace std;

int main()
{

	int a, b;
	cin >> a >> b;

	while (a != b)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}

	cout << "GCD is: " << a << endl;
	return 0;
}