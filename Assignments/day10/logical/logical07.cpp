/*
First Non-Zero Digit in Secret Code
A code is considered valid only if its first non-zero digit from the left is even.
Write a program that extracts the first non-zero digit and checks if it's even.
*/


#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter a number: ";
	cin >> n;

	int first_non_zero_digit = -1; 

	while (n > 0) {
		int digit = n % 10; 
		if (digit != 0) {
			first_non_zero_digit = digit; 
			break;
		}
		n /= 10; 
	}

	if (first_non_zero_digit != -1) { 
		if (first_non_zero_digit % 2 == 0) {
			cout << "The first non-zero digit is even: " << first_non_zero_digit << endl;
		}
		else {
			cout << "The first non-zero digit is odd: " << first_non_zero_digit << endl;
		}
	}
	else {
		cout << "No non-zero digits found." << endl;
	}

	return 0;
}