/*
Number Mirror
Hint:

Extract the last digit of a number using the modulus operator (n % 10).
Recursion Base Case: When n becomes zero, stop.
Logic: Print the current digit, then recursively call the function with n / 10 to remove the last digit.
Example:
For n = 1234, you will print the digits in reverse order:

4 3 2 1
*/

#include <iostream>
using namespace std;


int main()
{
	int n;
	cout << "Enter a number: ";
	cin >> n;
	
	cout << "Reversed digits: ";
	while (n > 0) {
		cout << n % 10 << " ";
		n /= 10;
	}
	cout << endl;
	return 0;
}