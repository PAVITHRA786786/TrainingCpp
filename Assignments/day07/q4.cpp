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

#include <iostream>		
using namespace std;
int main()
{
	int n1, n2, sum1 = 0, sum2 = 0;
	int digit;
	bool digits[10] = { false }; 

	cout << "Enter two integers: ";
	cin >> n1 >> n2;

	
	while (n1 > 0) {
		digit = n1 % 10;
		if (!digits[digit]) { 
			sum1 += digit;
			digits[digit] = true; 
		}
		n1 /= 10;
	}

	
	fill(begin(digits), end(digits), false);

	while (n2 > 0) {
		digit = n2 % 10;
		if (!digits[digit]) { 
			sum2 += digit;
			digits[digit] = true; 
		}
		n2 /= 10;
	}

	if (sum1 == sum2)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}
