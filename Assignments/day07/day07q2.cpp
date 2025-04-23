/*
Write a program to Count number of ways to divide a number
 in 4 parts.

*/

#include<iostream>

using namespace std;

int main()
{
	//int i,j,k,l, num;
	//cout << "Enter the number:" << endl;
	//cin >> num;
	int n = 6, countways = 0;
	for (int i = 1;i < n;i++)
	{
		for (int j = i;j < n;j++)
		{
			for (int k = j;k < n;k++)
			{
				for (int l = k;l < n;l++)
				{
					if ((i + j + k + l) == n)
					{
						cout << i << "+" << j << "+" << k << "+" << l << "=" << n << endl;
						countways++;
					}
				}
			}
		}
	}
	if (countways == 0)
		cout << "No of ways=-1" << endl;
	else
		cout << "No of ways=" << countways << endl;
	return 0;
	}
