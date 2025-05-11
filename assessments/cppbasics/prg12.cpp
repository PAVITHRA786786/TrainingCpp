/*
Write a Program to Remove Spaces From a String
*/

#include<iostream>
#include<cstring>
#define CAP 100

using namespace std;

int main()
{
	char str1[CAP], str2[CAP];
	cin.getline(str1, 99);
	int i, j;
	for (i = 0, j = 0;i < strlen(str1);i++)
	{
		if (str1[i] == ' ')
		{
			continue;
		}
		else
		{
			str2[j++] = str1[i];
		}
	}
		str2[j] = '\0';
		cout << "the string after removing space: " << str2 << endl;
	return 0;
}