/*
Check if a Character is an Uppercase Letter
Take a character input and check if it is between 'A' and 'Z'.
*/


#include <iostream>	
using namespace std;
int main()
{
	char ch;
	cout << "Enter a character: ";
	cin >> ch;

	if (ch >= 'A' && ch <= 'Z')
	{
		cout << ch << " is an uppercase letter." << endl;
	}
	else
	{
		cout << ch << " is not an uppercase letter." << endl;
	}

	return 0;
}