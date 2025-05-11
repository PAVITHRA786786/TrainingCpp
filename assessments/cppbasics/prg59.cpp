/*
Reverse a Number
Input a number and print its reverse using loops.
Example: 123 ? 321
*/

#include <iostream>
using namespace std;

int main()
{
	int num, reverse = 0;

	cin >> num;

	while (num > 0)
	{
		reverse = reverse * 10 + num % 10;
		num /= 10;
	}
	cout << "Reversed number is: " << reverse << endl;

	return 0;
}