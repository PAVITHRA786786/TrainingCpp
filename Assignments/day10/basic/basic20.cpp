/*
Print Fibonacci Sequence up to N Terms
Print first N terms of the Fibonacci series:
0, 1, 1, 2, 3, 5, 8, 13, …
*/

#include <iostream>
using namespace std;

int main()
{
	int num, a = 0, b = 1, c = 0;
	cout << "Enter the number of terms: ";
	cin >> num;

	cout << "Fibonacci Series: " << a << ", " << b << ", ";

	c = a + b;

	for (int i = 3; i <= num; i++)
	{
		
		a = b;
		b = c;
		c = a + b;
		cout << c << " ,";
		
	}
	cout<< endl;

	return 0;
}