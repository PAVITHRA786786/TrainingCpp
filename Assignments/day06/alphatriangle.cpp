/*
Problem Statement:- Write a c++ program to print alphabet triangle.
*/


#include<iostream>
using namespace std;
/*
int main()
{
	int i, j;
	int n=5;
	for (i = 0;i < 5;i++)
	{
		for (j = n - 1 - i;j >= 0;j--)
		{
			cout << " ";
		}
		for (char ch = 'A', j = n;j >= n - i;j++, ch++)
		{
			cout << ch;
		}
			cout << endl;
			//for (j = n;j > n - i;j--)
			//{
			//	cout << "*";
			//}
			//cout << endl;
		
		for (char ch = 'A' + i - 1;j > n - i;j--, ch--)
			{
				cout << ch;
			}
			cout << endl;
		
	}
	
}*/

/*
int main()
{
	char ch = 'A';
		int i, j, k, m;
		for (i = 1;i <= 5;i++)
		{
			for (j = 5;j >= i;j--)
				cout << " ";
			for (k = 1;k <= i;k++)
				cout << ch++;
			ch--;
			for (m = 1;m < i;m++)
				cout << --ch;
			cout << endl;
			ch='A';
	}
		return 0;
}



*/
