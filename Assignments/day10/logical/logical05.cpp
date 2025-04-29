/*
King's Perfect Army
A king decided only perfect armies can enter the final battle.
An army's number is perfect if the sum of its divisors equals the number itself.
Check whether a given army number is perfect.
*/


#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter the army number: ";
	cin >> n;

	int sum_of_divisors = 0; 

	for (int i = 1; i <= n / 2; i++) {
		if (n % i == 0) {
			sum_of_divisors += i; 
		}
	}

	if (sum_of_divisors == n) {
		cout << "The army number is perfect." << endl;
	}
	else {
		cout << "The army number is not perfect." << endl;
	}

	return 0;
}