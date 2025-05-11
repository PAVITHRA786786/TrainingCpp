/*
Write a Program to print an Inverted Pyramid
*/


#include<iostream>

using namespace std;

int main()
{
	int n = 5;
	int i, j, k;
	for (i = n;i >=1;i--)
	{
		for (j = n;j > i;j--)
			cout << " ";
		for (k = 1;k <= (2 * i - 1);k++)
			cout << "*";


		cout << endl;
	}
	return 0;
}