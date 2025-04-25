/*
Objective: Write a program to check if a given number is an Armstrong number

Requirements:

Use a loop to calculate the sum of cubes of the digits of the number

Compare the sum with the original number to determine if it's an Armstrong number

Example:
Input: 153
Output: Armstrong number
explanation:
(since (1^3 + 5^3 + 3^3 = 153))
*/

#include<iostream>
using namespace std;

int root(int);
int main()
	{
	int ret = 0;
	ret = root(153);
	cout << ret;
	return 0;
	}

int root(int num)
{
	int i, j, k;
	for ( i = num;i < num;i++)
	{
		for ( j = i;j < num;j++)
		{
			for ( k = j;k < num;k++)
			{
				cout << i << "+" << j << "+" << k << "=" << num << endl;
				if ((i ^ 3) && (j ^ 3) && (k ^ 3))
					return true;
			}
		}
	}
	
	if(num = true)
         cout << "Armstrong number" << endl;
	   else
	 cout << "Not Armstrong number"  << endl;
	return 0;
}
	
		


