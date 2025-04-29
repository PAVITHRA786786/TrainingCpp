/*
 Lost Treasure Map
A pirate found a number carved on a rock. He believes the smallest digit in that number points to the next island he should sail to.
Write a program to find the smallest digit in the given number.


*/


#include <iostream>
using namespace std;	

int main() {
	int n;
	cout << "Enter a number: ";
	cin >> n;

	int smallest_digit = 9; 

	while (n > 0) {
		int digit = n % 10; 
		if (digit < smallest_digit) {
			smallest_digit = digit; 
		}
		n /= 10; 
	}

	cout << "The smallest digit is: " << smallest_digit << endl;

	return 0;
}