/*
Check if a Year is a Leap Year
Problem:
Write a function to check whether a given year is leap year or not.

Hint:
Leap year if:

Divisible by 4 and not divisible by 100, or
Divisible by 400.
Use logical operators && and ||.
*/

#include<iostream>
using namespace std;

int main()
{
	int year;
	cout << "Enter a year:" << endl;
	cin >> year;
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		cout << year << " is a leap year." << endl;
	}
	else
	{
		cout << year << " is not a leap year." << endl;
	}
	return 0;
}