/*
Write a Program to Count the Number of Vowels
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
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
			str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
		{
			count++;
		}
		
	}
	cout << "the number of vowels in the string : " << count << endl;
	
	return 0;
}