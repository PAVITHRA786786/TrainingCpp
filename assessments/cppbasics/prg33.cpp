/*
Write a Program to Print a Triangle Star Pattern
*/


#include<iostream>

using namespace std;

int main()
{
	int n = 5;
	int i, j;
	for (i = 1;i <=n;i++)
	{
		for (j = 1;j <=i;j++)
		{
			cout << "*";
		}

		cout << endl;
	}
	return 0;
}