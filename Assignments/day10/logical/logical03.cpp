/*
 Broken Clock
A magical clock only rings when the current minute is a divisor of the hour shown.
Given an hour value, print all minutes when the clock will ring.
*/

#include <iostream>
using namespace std;

int main() {
	int hour;
	cout << "Enter the hour (1-12): ";
	cin >> hour;

	cout << "The clock will ring at the following minutes: ";
	for (int minute = 1; minute <= 60; minute++) {
		if (minute % hour == 0) {
			cout << minute << " ";
		}
	}

	cout << endl;

	return 0;
}