/*
Write a Program to Find the Factorial of a Number Using Loops
*/

#include<iostream>

using namespace std;

int main()
{
	int num, fact = 1, i;
	cin >> num;
	for (i = 1;i <= num;i++)
	{
		fact *= i;
	}
	cout << "Factorial of a Number: " <<fact<< endl;
	return 0;
}