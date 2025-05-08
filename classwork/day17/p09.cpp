/*
swap using bitwise operator
*/


#include<iostream>

using namespace std;

int main()
{
	int a, b,c;
	cin >> a >> b;
	a = a ^ b;
	b = b ^ a;
	a = a ^ b;
	cout << a << " " << b << endl;
	c = a & b;
	int d = a | b;
	cout << c << " " << d << endl;
	unsigned int max = 0;
	max = ~max;
	cout << max << endl;
	return 0;
}