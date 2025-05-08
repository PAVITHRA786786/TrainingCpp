/*
*****
*****
*****
*****
*****
*****

*/


#include<iostream>

using namespace std;

int main()
{
	int n = 6;
	int i, j, k, l;
	for (i = 0;i < n / 2;i++)
	{
		for (j = 0;j < n;j++)
			cout << "*";

		cout << endl;
	}
	for (k = 0;k < n / 2;k++)
	{
		for (l = 0;l < n;l++)
			cout << "*";

		cout << endl;
	}
	return 0;
}