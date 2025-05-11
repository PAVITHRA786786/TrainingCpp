/*
Write a Program to Print the Rotated Hourglass Pattern
*/


#include<iostream>
using namespace std;

void pattern(int);
void pattern(int n)
{
	int i, j, k;
	for (i = 0;i <= n;i++)
	{
		for (j = 0;j <= i;j++)
		{
			cout << "* ";
		}
		for (k = 0;k < 2 * (n - i);k++)
		{
			cout << "  ";
		}
		for (j = 0;j <= i;j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	for (i = n - 1;i >= 0;i--)
	{
		for (j = 0;j <= i;j++)
		{
			cout << "* ";
		}
		for (k = 0;k < 2 * (n - i);k++)
		{
			cout << "  ";
		}
		for (j = 0;j <= i;j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}
int main()
{
	int n = 5;
	pattern(n);
	return 0;
}