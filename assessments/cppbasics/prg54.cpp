/*
Write a program in C++ to convert temperature in Fahrenheit to Celsius.
*/

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	float fahrenheit, celsius;
	cin >> fahrenheit;

	celsius = (fahrenheit - 32) * 5 / 9;
	cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
	cout << "Temperature in Celsius: " << celsius << endl;

	return 0;
}