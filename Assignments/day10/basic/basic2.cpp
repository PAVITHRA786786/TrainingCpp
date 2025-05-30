/*
 Swap Two Numbers Using XOR Operator
Swap two integers without a third variable using only the XOR (^) operator.
*/


#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Enter two numbers: ";
	cin >> a >> b;

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	cout << "After swapping: " << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	return 0;
}