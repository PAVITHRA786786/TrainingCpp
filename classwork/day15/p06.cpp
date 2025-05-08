/*
check if the year is a leap or not
*/

#include<iostream>
using namespace std;

void year(int);
int main()
{

	year(0);
	return 0;
}


void year(int year)
{
	int year;
	cin >> year;
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		cout << "Leap year" << endl;
	else
		cout << "Not a leap year" << endl;
}
