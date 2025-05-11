/*
Write a Program to Find the Maximum and Minimum of the Two Numbers Without Using the Comparison Operator
*/

#include<iostream>

using namespace std;

int main()

{
	int a, b;
	cin >> a >> b;
	cout << "Max : " << (((a + b) + abs(a - b)) / 2) << endl;
	cout << "Min : " << (((a + b) - abs(a - b)) / 2) << endl;
	return 0;
}