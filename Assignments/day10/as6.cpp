/*
Sum of Digits Until a Single Digit
Problem:
Take an integer and keep adding its digits recursively until only one digit remains.

Hint:

Use a function that calculates sum of digits.
If result >= 10, call the same function again.
*/

#include<iostream>
using namespace std;

int sumdigits(int);

int main()
{
	int n;
	cout << "Enter a number:" << endl;
	cin >> n;
	int result = sumdigits(n);
	cout << "Sum of digits until a single digit is:" << result << endl;
	return 0;
}

int sumdigits(int num)
{
	if (num < 10)
	{
		return num;
	}
	else
	{
		int sum = 0;
		while (num > 0)
		{
			sum += num % 10;
			num /= 10;

		}
		return sumdigits(sum);
	}
}
