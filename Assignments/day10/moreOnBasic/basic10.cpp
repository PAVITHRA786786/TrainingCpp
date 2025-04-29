/*
Sum of Series 1 + 2 + 4 + 8 + ... up to N terms
Problem:
Print the sum of a series where each term is double the previous, starting with 1.

Logical Tip:
Initialize term=1, then in loop, term = term * 2 for each next term.
*/

#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter the number of terms: " << endl;
	cin >> n;

	int sum = 0;
	int term = 1;

	for (int i = 1; i <= n; i++) {
		sum += term;
		term *= 2; 
	}

	cout << "The sum of the series is: " << sum << endl;

	return 0;
}