/*
Print Multiplication Table of a Number
Input a number n. Print its multiplication table up to 10.
*/

#include <iostream>
using namespace std;

int main()
{
	int n;
	
	cin >> n;

	cout << "Multiplication table of " << n << " is:" << endl;
	for (int i = 1; i <= 10; i++)
	{
		cout << n << " * " << i << " = " << n * i << endl;
	}

	return 0;
}