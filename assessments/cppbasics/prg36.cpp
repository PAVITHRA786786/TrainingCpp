/*
Write a C++ Program to Print the Given String in Reverse Order Using Recursion
*/

#include<iostream>
#include<cstring>

#define CAP 100

using namespace std;

int main()
{
	char str[CAP];
	int n, i;
	cin.getline(str, 99);
	n = strlen(str);
	for (i = n - 1; i >= 0; i--)
	{
		cout << str[i];
	}
	cout << endl;
	return 0;
	}
