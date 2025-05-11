/*
Write a program in C++ that converts kilometers per hour to miles per hour.
*/


#include<iostream>

#include<math.h>

using namespace std;

int main()
{
	float kmph, mph;
	cin >> kmph;

	mph = kmph * 0.621371;

	cout << "Speed in miles per hour: " << mph << endl;

	return 0;
}