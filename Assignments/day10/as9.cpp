/*
Convert Hours into Minutes and Seconds
Problem:
Write a function that converts hours into minutes and seconds.

Hint:

1 hour = 60 minutes.
1 minute = 60 seconds.
Multiply properly and print separately.
*/

#include<iostream>
using namespace std;

int main()
{
	int hours;
	cout << "Enter hours:" << endl;
	cin >> hours;
	int minutes = hours * 60; 
	int seconds = minutes * 60; 
	cout << "Hours: " << hours << ", Minutes: " << minutes << ", Seconds: " << seconds << endl;
	return 0;
}	