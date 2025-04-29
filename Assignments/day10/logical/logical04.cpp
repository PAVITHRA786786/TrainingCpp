/*
Secret Message in Binary
You received a secret code in the form of an integer.
The number of 1s in its binary form tells how many steps you need to unlock a door.
Find the number of 1s in the binary form of the given number.
*/


#include <iostream>
using namespace std;


int main() {
	int n;
	cout << "Enter a number: ";
	cin >> n;

	int count_of_ones = 0; 

	while (n > 0) {
		if (n % 2 == 1) { 
					count_of_ones++; 
				}
		n /= 2; 
	}

	cout << "The number of 1s in the binary form is: " << count_of_ones << endl;

	return 0;
}