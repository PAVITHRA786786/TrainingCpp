/*
remove spaces from a string

*/	

#include <iostream>
#include<cstring>
#define CAP 100
using namespace std;

int main()
{
	char str1[CAP], str2[CAP];
	int i, j;
	cin.getline(str1, 99);
	
	for (i = 0, j = 0;i < strlen(str1);i++)
	{
		if (str1[i] == ' ')
			continue;
		else
			str2[j++] = str1[i];

	}
	str2[j] = '\0';
	cout << "String after removing spaces: " << str2 << endl;
	return 0;
	
}

