/*
Find the Greatest Common Divisor (GCD)
Input two numbers and find their GCD using Euclid�s method (subtraction-based).
*/


#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Enter two numbers: ";
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