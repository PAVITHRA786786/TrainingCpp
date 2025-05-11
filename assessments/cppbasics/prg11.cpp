/*
Write a Program to Remove All Characters From a String Except Alphabets
*/


#include<iostream>
#include<cstring>
#define CAP 100

using namespace std;

int main()
{
	char str[CAP];
	cin.getline(str, 99);
	int i, j = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[j] = str[i];
			j++;
		}
	}
	str[j] = '\0';
	cout << "The string with only alphabets: " << str << endl;

	return 0;
}