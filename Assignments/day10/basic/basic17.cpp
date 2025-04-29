/*
Check if a Number is a Palindrome
Input a number.
A palindrome number reads same backward and forward (e.g., 121, 545).
Check using loops.
*/

#include <iostream>
using namespace std;

int main()
{
	int num, originalNo, reversedNo = 0;
	cout << "Enter a number: ";
	cin >> num;

	originalNo = num; 

	while (num > 0)
	{
		reversedNo = reversedNo * 10 + num % 10;
		num /= 10;
	}

	if (originalNo == reversedNo)
	{
		cout << originalNo << " is a palindrome." << endl;
	}
	else
	{
		cout << originalNo << " is not a palindrome." << endl;
	}

	return 0;
}