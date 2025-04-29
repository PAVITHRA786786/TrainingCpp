/*
Check if the Product of Digits is a Prime Number
Problem:
Input an integer, multiply its digits.
Check if the result is a prime number.

Logical Tip:
First find product, then check primality by dividing up to √(product).
*/

#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter a number: " << endl;
	cin >> n;

	int product = 1;

	while (n > 0) {
		int digit = n % 10;
		product *= digit;
		n /= 10;
	}

	bool isPrime = true;

	if (product < 2) {
		isPrime = false;
	}
	else {
		for (int i = 2; i * i <= product; i++) {
			if (product % i == 0) {
				isPrime = false;
				break;
			}
		}
	}

	if (isPrime) {
		cout << "The product of digits is a prime number." << endl;
	}
	else {
		cout << "The product of digits is not a prime number." << endl;
	}

	return 0;
}