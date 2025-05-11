/*
Write a Program to Swap the Values of Two Variables Without Using any Extra Variable
*/

#include<iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b;
	a = a ^ b;
	b = b ^ a;
	a = a ^ b;
	cout << a << " " << b << endl;
	return 0;
}