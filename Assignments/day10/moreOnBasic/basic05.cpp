/*
Check if a Number is a Perfect Number
Problem:
A number is perfect if sum of its proper divisors equals the number itself (e.g., 6 = 1 + 2 + 3).

Logical Tip:
Sum divisors up to n/2 and compare with n.
*/

#include <iostream>

using namespace std;

int main() {
	int n;
	cout << "Enter a number: " << endl;
	cin >> n;

	int sum = 0;

	for (int i = 1; i <= n / 2; i++) {
		if (n % i == 0) {
			sum += i;
		}
	}

	if (sum == n) {
		cout << n << " is a perfect number." << endl;
	}
	else {
		cout << n << " is not a perfect number." << endl;
	}

	return 0;
}