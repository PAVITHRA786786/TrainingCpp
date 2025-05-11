/*
Write a Program to Count the Sum of Numbers in a String
*/


#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	int i, sum = 0;
	char s1[100];
	cin.getline(s1, 99);
	for (i = 0;i < strlen(s1);i++)
	{

		if (isdigit(s1[i]))
		{
			sum = sum + s1[i] - 48;
			
		}
		
	}
	cout << sum << endl;
	return 0;

}