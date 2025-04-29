/*
Problem 1: Print Numbers from N to 1
Problem Statement:
Write a recursive function to print numbers from N down to 1.
*/


#include <iostream>	
using namespace std;	

void printNumbers(int); 

int main() {
	int n;
	cout << "Enter a number: " << endl;
	cin >> n;
	printNumbers(n);
	cout << endl;
	return 0;
}	

void printNumbers(int num) {
	if (num < 1) {
		return;
	}
	cout << num << " ";
	printNumbers(num - 1);
}