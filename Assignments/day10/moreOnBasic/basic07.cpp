/*
Find the First Non-Zero Digit of a Number
Problem:
Input a number, and print the first non-zero digit from the left.

Logical Tip:
Divide by 10 until number becomes <10.
Carefully handle numbers like 50400.


*/

#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter a number: " << endl;
	cin >> n;

	if (n < 0) {
		n = -n;
	}

	if (n == 0) {
		cout << "The first non-zero digit is: 0" << endl;
		return 0;
	}

	while (n >= 10) {
		n /= 10;
	}

	cout << "The first non-zero digit is: " << n << endl;

	return 0;
}