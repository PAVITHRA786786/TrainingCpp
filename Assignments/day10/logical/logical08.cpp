/*
Energy Crystals
An alien crystal's energy level is always a power of 2 (like 2, 4, 8, 16, 32...).
Given an energy reading, find the highest power of 2 less than or equal to the reading.
*/


#include <iostream>
using namespace std;

int main() {
	int energy_reading;
	cout << "Enter the energy reading: ";
	cin >> energy_reading;

	int highest_power_of_2 = 1; 

	while (highest_power_of_2 * 2 <= energy_reading) {
		highest_power_of_2 *= 2; 
	}

	cout << "The highest power of 2 less than or equal to the reading is: " << highest_power_of_2 << endl;

	return 0;
}