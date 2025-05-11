/*
Write a Program to Calculate the Factorial of a Number Using Recursion
*/

#include<iostream>
using namespace std;

long int fact(int);
int main()
{
	int num;
	cin >> num;
	cout << "Factorial of a Number : " << fact(num)<<endl;
	return 0;
}

long int fact(int n)
{
	if (n >= 1)
		return n * fact(n - 1);
	else return 1;
}