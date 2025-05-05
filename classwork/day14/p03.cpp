/*
print the ascii value of character
*/


#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	char ch;
	cin >> ch;
	cout << "ascii value of " << ch << " = " << int(ch) << endl;
	printf("%d", ch);
	return 0;
}