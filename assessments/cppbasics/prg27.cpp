/*
Write a Program to Print a Diamond Pattern
*/


#include<iostream>

using namespace std;

int main()
{
	int n = 7;
	int i, j, k, l, m;
	for (i = 0;i < n - 3;i++)
	{
		for (j = 0;j < (n / 2) - i;j++)
			cout << " ";
		for (k = j;k <= n / 2;k++)
			cout << "*";
		for (m = j + 1;m <= n / 2;m++)
			cout << "*";

		cout << endl;
	}

	for (i = n-1;i > 0 ;i--)
	{
		for (j = 0;j < n-i;j++)
			cout << " ";
		for (k = j;k <j ;k++)
			cout << "*";
		for (m = j + 1;m <= i ;m++)
			cout << "*";

		cout << endl;
	}

	

	return 0;
}