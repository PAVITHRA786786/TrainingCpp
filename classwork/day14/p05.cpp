/*
whether a character is an alphabet or not

*/

#include<iostream>

using namespace std;

int main()
{
	char ch;
	cin >> ch;
	char s1 = 'a', s2 = s2 = 'A';
	char e1 = s1+25;
	char e2 = s2+25;
	if (((ch >= s1) && (ch <= e1))||((ch>=s2)&&(ch<=e2)))
	{
		cout << ch << " is an alphabet" << endl;
	}
	else
	{
		cout << ch << " is not an alphabet" << endl;
	}
	/* char ch;
	cin >> ch;
	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
	{
		cout << ch << " is an alphabet" << endl;
	}
	else
	{
		cout << ch << " is not an alphabet" << endl;
	}*/
	return 0;
}
