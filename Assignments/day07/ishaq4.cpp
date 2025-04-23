/*
Isha is playing with numbers and trying to write program to Check if the sum of distinct digits of two integers are equal

Output Format:
If  the sum of distinct digits of both the numbers are equal
if true	print YES
otherwise  print NO.

Examples:
Input:
 2452
 9222
Output:
 YES

Input
121
3035
Output:
 NO
*/

#include<iostream>
using namespace std;

int main()
{
	int sumn = 0, summ = 0, n, m, digit;
	cout << "Enter the value" << endl;
	cin >> n;
	cout << "Enter the value" << endl;
	cin >> m;
	while ((n > 0)||(m>0)) {
		digit = n % 10;
		sumn += digit;
		n /= 10;

		digit = m % 10;
		summ += digit;
		m /= 10;
	}
	/*if (summ == sumn)
		cout << "YES";
	else
		cout << "NO";
	*/
	if (summ == 0) {
		cout << "YES";
	}
	else{
		cout << "NO";
	}
	if (sumn == 0) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;

}




