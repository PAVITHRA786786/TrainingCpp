/*
Write a Program to Toggle Each Character in a String
*/

#include<iostream>
#include<cstring>
#define CAP 100

using namespace std;

int main()
{
	char str[CAP];
	cin.getline(str, 99);
	int i;
	for (i = 0;str[i] != '\0';i++) {
		if (islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
		else
			if (isupper(str[i]))
			{
				str[i] = tolower(str[i]);
				
			}
	}
	cout << "Toggled String : " << str << endl;
	return 0;
}