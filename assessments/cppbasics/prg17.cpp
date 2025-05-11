/*
Write a Program to Check Palindrome
*/

#include<iostream>
#define MAX 100

using namespace std;

int main()
{
	char str[MAX], rev[MAX];
	int i, j, len = 0;
	cin.getline(str, MAX);
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	for (i = len - 1, j = 0; i >= 0; i--, j++)
	{
		rev[j] = str[i];
	}
	rev[j] = '\0';
	if (strcmp(str, rev) == 0)
	{
		cout << "Palindrome" << endl;
	}
	else
	{
		cout << "Not Palindrome" << endl;
	}
	return 0;
}