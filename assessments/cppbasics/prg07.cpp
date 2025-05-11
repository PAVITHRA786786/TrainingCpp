/*
Write a Program to Find the Length of the String Without using strlen() Function
*/

#include<iostream>
#include<cstring>
#define CAP 100
using namespace std;

int main()
{
	char str[CAP];
	cin.getline(str, 99);
	int i, count = 0;
	for (i = 0;str[i] != '\0';i++)
	{
		count++;
	}
	cout << "the Length of the String is " << count << endl;
	return 0;
}