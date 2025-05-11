/*
Write a Program to Remove the Vowels from a String
*/

#include<iostream>
#include<cstring>
#define CAP 100

using namespace std;

int main()
{
	char str[CAP];
	cin.getline(str, 99);
	int i, j=0;
	for (i = 0;str[i] != '\0';i++)
	{
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
			str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
		{
			continue;
		}
		else {
			str[j] = str[i];
			j++;
		}
	}
	str[j]= '\0';
	cout << "The string without vowels: " << str << endl;
	return 0;
}