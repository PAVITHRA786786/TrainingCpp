/*

		 *
		* *
	   * * *
	  * * * *
	 * * * * *


*/



#include<iostream>

using namespace std;

void pattern(int);

void pattern(int n)
{
	int i, j, k;
	k = 2 * n - 2;
	for (i = 0;i < n;i++)//k--;
	{
		for (j = 0;j <= k;j++)
		{
			cout << " ";
		}
		k = k - 1;//k--;
		for (j = 0;j <= i;j++)
		{
				cout << "* ";
				//cout << " ";
		}
		/*
		for (j = 0;j <i;j++)
		{
				cout << "*";//from 2nd row another triangle.
				
				}
				*/
		
		cout << endl;
	}
}

int main()
{
	int n;
	cin >> n;
	pattern(n);
	return 0;
}