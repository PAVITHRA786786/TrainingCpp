/*
 Print Reverse Counting from N to 1 using while loop
Problem:
Input n. Print numbers from n down to 1 using a while loop.

Logical Tip:
Simple decrementing logic inside a loop.


*/

#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter a number: " << endl;
	cin >> n;

	while (n > 0) {
		cout << n << " ";
		n--;
	}
	cout << endl;

	return 0;
}