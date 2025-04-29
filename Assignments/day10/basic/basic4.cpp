/*
Check if Two Numbers are Equal Using Only Bitwise XOR
Without using ==, check if two numbers are equal.
Hint: If (a ^ b) == 0, they are equal.


*/
#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Enter two numbers: ";
	cin >> a >> b;

	if ((a ^ b) == 0)
	{
		cout << "Numbers are equal." << endl;
	}
	else
	{
		cout << "Numbers are not equal." << endl;
	}

	return 0;
}