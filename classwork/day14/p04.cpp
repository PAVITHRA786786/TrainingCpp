/*
check whether a character is a vowel or consonant
*/


#include<iostream>

using namespace std;

int main()
{
	char ch;
	cin >> ch;
	if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'||
		ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
	{
		cout << ch << " is a vowel" << endl;
	}
	else
	{
		cout << ch << " is a consonant" << endl;
	}
	return 0;
}
