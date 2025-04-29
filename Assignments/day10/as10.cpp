/*
Check if the Sum of Two Numbers is Even
Problem:
Write a function that returns true if the sum of two integers is even.

Hint:

Sum the two numbers.
Check if (sum % 2 == 0).
*/

#include<iostream>
using namespace std;

bool isEven(int, int);
int main()
{
	int a, b;
	cout << "Enter two numbers:" << endl;
	cin >> a >> b;
	bool result = isEven(a, b);
	if (result)
	{
		cout << "The sum of " << a << " and " << b << " is even." << endl;
	}
	else
	{
		cout << "The sum of " << a << " and " << b << " is odd." << endl;
	}
	return 0;
}

bool isEven(int num1, int num2)
{
	int sum = num1 + num2;
	return (sum % 2 == 0);
}
