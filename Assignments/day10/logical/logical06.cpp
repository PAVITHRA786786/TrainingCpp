/*
Spaceship Countdown
Before launching, a spaceship performs a countdown from a given number n to 1.
Write a program to simulate the countdown using a while loop.
*/


#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter the countdown start number: ";
	cin >> n;

	while (n > 0) {
		cout << n << " ";
		n--; 
	}

	cout << endl;

	return 0;
}