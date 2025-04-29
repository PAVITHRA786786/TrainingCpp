/*
Find the Highest Power of 2 Less Than or Equal to N
Problem:
Input n. Find the largest power of 2 (2^k) such that 2^k <= n.

Logical Tip:
Multiply by 2 repeatedly till crossing n
*/

#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter a number: " << endl;
	cin >> n;

	int power = 1;

	while (power * 2 <= n) {
		power *= 2;
	}

	cout << "The highest power of 2 less than or equal to " << n << " is: " << power << endl;

	return 0;
}