/*
Sum Only Odd Digits of a Number
Problem:
Input a number and sum only its odd digits.

Logical Tip:
Extract each digit, check if odd (digit % 2 != 0), add it.
*/

#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter a number: " << endl;
	cin >> n;

	int sum = 0;

	while (n > 0) {
		int digit = n % 10;

		if (digit % 2 != 0) {
			sum += digit;
		}

		n /= 10;
	}

	cout << "The sum of odd digits is: " << sum << endl;

	return 0;
}