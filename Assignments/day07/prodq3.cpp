/*
Program to Check if product of digits of a number at even and odd places is equal.
Input:

2841
Output:
 Yes

Input:

4324
Output:
No
*/

#include<iostream>
using namespace std;

int main()
{
	int prododd = 1, prodeven = 1, n, digit;
	cout << "Enter the value:" << endl;
	cin >> n;
	while (n > 0) {
		digit = n % 10;
		prodeven *= digit;
		n /= 10;

		digit = n % 10;
		prododd *= digit;
		n /= 10;
	}
	if (prodeven == prododd)
		cout << "YES";
	else
		cout << "NO";
	
}