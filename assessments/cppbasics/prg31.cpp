/*
Write a Program to Print a Simple Pyramid Pattern
*/


#include<iostream>

using namespace std;

int main()
{
	int n = 5;
	int i, j, k;
	for (i = 1;i < n ;i++)
	{
		for (j = n;j >=i;j--)
			cout << " ";
		for (k = 1;k <= (2*i-1);k++)
			cout << "*";
		

		cout << endl;
	}
	return 0;
}