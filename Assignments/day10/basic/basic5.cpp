/*
Find Remainder Without Using % Operator
Given two integers a and b, find a%b without using %.
Hint: Use a - (a/b)*b.



*/
#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Enter two integers: ";
	cin >> a >> b;

	int remainder = a - (a / b) * b;

	cout << "Remainder of " << a << " divided by " << b << " is: " << remainder << endl;

	return 0;
}