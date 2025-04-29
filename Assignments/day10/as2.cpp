/*
Problem 2: Sum of First N Natural Numbers
Problem Statement:
Write a recursive function to find the sum of the first N natural numbers.

*/


#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter a number: " << endl;
	cin >> n;
	int sum = 0;
	for(int i=1;i<=n;i++)
	{
		sum += i;
	}
	cout << "Sum of first " << n << " natural numbers is: " << sum << endl;
	return 0;
}
