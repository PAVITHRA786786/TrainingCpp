/*
 Find Factorial of a Number
Input a number and calculate its factorial using a loop.
*/

#include <iostream>
using namespace std;

int main()
{
	int num, factorial = 1;
	cout << "Enter a number: ";
	cin >> num;

	for (int i = 1; i <= num; i++)
	{
		factorial *= i; 
	}

	cout << "Factorial of " << num << " is: " << factorial << endl;

	return 0;
}