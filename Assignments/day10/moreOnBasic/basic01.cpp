/*
 Find the Smallest Digit in a Number
Problem:
Input an integer and find the smallest digit inside it.

Logical Tip:

Peel digits one by one (%10 and /10).
Compare with a running min.
*/

#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter a number: " << endl;
	cin >> n;

	int smallest = 9;

	while (n > 0) {
		
		int digit = n % 10;

		if (digit < smallest) {
			smallest = digit;
		}

		n /= 10;
	}

	cout << "The smallest digit is: " << smallest << endl;

	return 0;
}

