/*
 Swap Two Numbers Without Using a Third Variable
Problem:
Swap two integers without using a temporary variable, using pass-by-reference.

Hint:
Use simple math:

a = a + b;
b = a - b;
a = a - b;
*/

#include<iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Enter two numbers:" << endl;
	cin >> a >> b;
	a = a + b; 
	b = a - b;
	a = a - b;
	cout << "After swapping: a = " << a << ", b = " << b << endl;
	return 0;
}