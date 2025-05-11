/*
Write a Program to Print the Given String in Reverse Order
*/


#include<iostream>
#define CAP 100
using namespace std;

int main()
{
	char str[CAP];
	cin.getline(str, 99);
	int i, j;
	for (i = 0; str[i] != '\0'; i++)
	{
	}

	for (j = i - 1; j >= 0; j--)
	{
		cout << str[j];
	}
	cout << endl;
	return 0;
}