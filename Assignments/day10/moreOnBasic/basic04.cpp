/*
Count the Number of 1s in Binary Representation of a Number
Problem:
Input a number. Count how many 1s are there in its binary form.

Logical Tip:
Keep checking n % 2, divide by 2.
*/

#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter a number: " << endl;
	cin >> n;

	int count = 0;

	while (n > 0) {
		if (n % 2 == 1) {
			count++;
		}
		n /= 2;
	}

	cout << "The number of 1s in binary representation is: " << count << endl;

	return 0;
}