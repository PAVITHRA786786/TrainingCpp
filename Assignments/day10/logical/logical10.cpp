/*

The Doubling Machine
A strange machine doubles a number every time you press a button.
Starting from 1, you press the button n times.
Find the sum of all numbers you see after each press.

*/


#include <iostream>
using namespace std;


int main() {
	int n;
	cout << "Enter the number of button presses: ";
	cin >> n;

	int sum = 0; 
	int current_number = 1; 

	for (int i = 0; i < n; i++) {
		sum += current_number; 
		current_number *= 2; 
	}

	cout << "The sum of all numbers seen is: " << sum << endl;

	return 0;
}