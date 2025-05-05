/*
Problem Statement :Write the program for number and star pattern printing given n value.
Input Format : Take N as input of type integer.
Output Format : Print number and star pattern printing

Constraints:
4<=N<=10

Sample Input1:
5
Sample Output1:

*
*1*
*121*
*12321*
*1234321*
*123454321*
*1234321*
*12321*
*121*
*1*
*
*/

#include<iostream>
using namespace std;

int main()
{

	int num, itr1, itr2, itr3, itr4;
	int num2 = 1;
	cout << "Enter n value:" << endl;
	cin >> num;
	for (itr1 = 0;itr1 <= num;itr1++)
	{
		for (itr3 = itr1;itr3 <= itr1;itr3++)
			cout << "*";

		for (itr2 = 1;itr2 <= itr1;itr2++)
		{
			cout << itr2;
		}
		for (itr4 = itr1 - 1;itr4 > 0;itr4--)
		{
			cout << itr4;
		}
		for (int num2 = num;num2 >= num - itr4;num2--)
			cout << "*";
		cout << endl;
	}

	for (itr1 = 0;itr1 < num;itr1++)
	{
		for (itr3 = itr1;itr3 <= itr1;itr3++)
			cout << "*";
		for (itr4 = 1;itr4 < num - itr1;itr4++)
		{
			cout << itr4;
		}
		itr4--;
		for (itr2 = itr4 - 1;itr2 >= 1;itr2--)
		{
			cout << itr2;
		}
		for (itr3 = itr1 - itr2;itr3 <= itr1;itr3++)
			cout << "*";

		cout << endl;
	}

	return 0;
	}
