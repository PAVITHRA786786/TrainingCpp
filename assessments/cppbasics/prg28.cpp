/*
Write a Program to Print a Pyramid Pattern
*/


#include<iostream>

using namespace std;

void pattern(int);

void pattern(int n)
{
	int i, j, k;
	k = 2 * n - 2;
	for (i = 0;i < n;i++)
	{
		for (j = 0;j <= k;j++)
		{
			cout << " ";
		}
		k = k - 1;
		for (j = 0;j <= i;j++)
		{
			cout << "* ";
			
		}

		cout << endl;
	}
}

int main()
{
	int n=5;
	pattern(n);
	return 0;
}