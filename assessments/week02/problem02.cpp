/*
Objective: Write a program to check if a given number is an Armstrong number

Requirements:

Use a loop to calculate the sum of cubes of the digits of the number

Compare the sum with the original number to determine if it's an Armstrong number

Example:
Input: 153
Output: Armstrong number
explanation:
(since (1^3 + 5^3 + 3^3 = 153))
*/

#include <iostream>

using namespace std;

int main() {
	int num, originalNum, remainder, result = 0, n = 0;

	cout << "Enter an integer: ";
	cin >> num;

	originalNum = num;


	while (originalNum != 0) {
		originalNum /= 10;
		n++;
	}

	originalNum = num;

	while (originalNum != 0) {
		remainder = originalNum % 10;
		result += pow(remainder, n);
		originalNum /= 10;
	}


	if (result == num)
		cout << num << " is an Armstrong number." << endl;
	else
		cout << num << " is not an Armstrong number." << endl;

	return 0;
}