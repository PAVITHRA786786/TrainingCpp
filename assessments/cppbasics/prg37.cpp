/*
Write a Program to Check if the Given String is Palindrome or not Using Recursion
*/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char str[100];
	cin >> str;

	int len = strlen(str);
	bool isPalindrome = true;

	for (int i = 0; i < len / 2; i++)
	{
		if (str[i] != str[len - i - 1])
		{
			isPalindrome = false;
			break;
		}
	}

	if (isPalindrome)
		cout << str << " is a palindrome." << endl;
	else
		cout << str << " is not a palindrome." << endl;

	return 0;
}
