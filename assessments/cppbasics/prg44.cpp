/*
Write a Program to Check for the Equality of Two Numbers Without Using Arithmetic or Comparison Operator
*/

#include<iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	if (a ^ b)
		cout << "Not Equal "<<endl;
	else
		cout << "Equal " << endl;
	return 0;
}