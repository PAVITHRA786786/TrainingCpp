/*
Find Sum of Digits of a Number
Input a number and find sum of its digits using a while loop.
*/

#include <iostream>
using namespace std;

int main()
{
	int num, sum = 0;
	cout << "Enter a number: ";
	cin >> num;

	while (num > 0)
	{
		sum += num % 10; 
		num /= 10;       
	}

	cout << "Sum of digits is: " << sum << endl;

	return 0;
}