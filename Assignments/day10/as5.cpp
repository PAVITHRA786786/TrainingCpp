/*
Find the Middle Value Among Three Numbers
Problem:
Write a function that takes three integers and returns the middle one (not maximum, not minimum).

Hint:
Use basic comparisons (>, <) between the three numbers.
Check conditions like:

If a > b and a < c or a < b and a > c, then a is the middle.
*/

#include<iostream>
using namespace std;

int main()
{
	int firstno, secondno, thirdno;
	cout << "Enter three numbers:" << endl;
	cin >> firstno >> secondno >> thirdno;
	if ((firstno > secondno && firstno < thirdno) || (firstno < secondno && firstno > thirdno))
	{
		cout << "Middle value is: " << firstno << endl;
	}
	else if ((secondno > firstno && secondno < thirdno) || (secondno < firstno && secondno > thirdno))
	{
		cout << "Middle value is: " << secondno << endl;
	}
	else
	{
		cout << "Middle value is: " << thirdno << endl;
	}
}