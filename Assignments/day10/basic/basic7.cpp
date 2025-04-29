/*
Find the Maximum of Three Numbers
Take three integers and print the largest using nested if-else.


*/

#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Enter three integers: ";
	cin >> a >> b >> c;

	if (a >= b)
	{
		if (a >= c)
		{
			cout << "The largest number is: " << a << endl;
		}
		else
		{
			cout << "The largest number is: " << c << endl;
		}
	}
	else
	{
		if (b >= c)
		{
			cout << "The largest number is: " << b << endl;
		}
		else
		{
			cout << "The largest number is: " << c << endl;
		}
	}

	return 0;
}