/*
Write a Program to Check Whether a Character is a Vowel or Consonant
*/

#include<iostream>

using namespace std;

int main()
{
	char ch;
	cin >> ch;
	if (isalpha(ch)) {
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
			ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
		{
			cout << ch << " is a Vowel" << endl;
		}
		else
		{
			cout << ch << " is a Consonant" << endl;
		}
	}
	else
	{
		cout << ch << " is a not an alphabet" << endl;
	}
	return 0;
}