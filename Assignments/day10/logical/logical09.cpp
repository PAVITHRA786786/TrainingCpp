/*
Magic Multiplying Puzzle
You find a magic box that multiplies the digits of a number you enter.
If the final product of digits is a prime number, the box opens.
Write a program to simulate the box opening logic.
*/


#include <iostream>
using namespace std;
bool is_prime(int);

int main()
{
		int n;
	cout << "Enter a number: ";
	cin >> n;

	int product = 1; 

	while (n > 0) {
		int digit = n % 10; 
		product *= digit; 
		n /= 10; 
	}

	if (is_prime(product)) {
		cout << "The box opens!" << endl;
	}
	else {
		cout << "The box remains closed." << endl;
	}

	return 0;

}

bool is_prime(int num) {
	if (num <= 1) return false;
	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) return false;
	}
	return true;
}