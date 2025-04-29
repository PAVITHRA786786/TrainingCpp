/*
 Find Power Using Only Multiplication
Problem:
Write a function to compute a^b using only multiplication, no pow() or loops.

Hint:
Use recursion:

a^b = a * a^(b-1)
Base case: b == 0 → return 1.
*/

#include<iostream>
using namespace std;
int power(int, int);
int main()
{
	int a, b;
	cout << "Enter base and exponent:" << endl;
	cin >> a >> b;
	int result = power(a, b);
	cout << a << "^" << b << " = " << result << endl;
	return 0;
}
int power(int base, int exp)
{
	if (exp == 0)
	{
		return 1; 
	}
	else
	{
		return base * power(base, exp - 1); 
	}
}