/*
Odd Coin Counting
In a village fair, you earn odd-numbered coins (1, 3, 5...) from games.
Given your total coin-collection number, find the sum of only the odd digits of your coin number to determine your prize.
*/


#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter a number: ";
	cin >> n;

	int sum_of_odd_digits = 0; 

	while (n > 0) {
		int digit = n % 10; 
		if (digit % 2 != 0) { 
					sum_of_odd_digits += digit; 
				}
		n /= 10; 
	}

	cout << "The sum of odd digits is: " << sum_of_odd_digits << endl;

	return 0;
}