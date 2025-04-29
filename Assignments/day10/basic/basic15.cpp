/*
Count Number of Even and Odd Digits in a Number
Input a number, count how many digits are even and how many are odd.
*/

#include <iostream>
using namespace std;

int main()
{
	int num, evenCount = 0, oddCount = 0;
	cout << "Enter a number: ";
	cin >> num;

	while (num > 0)
	{
		int digit = num % 10; 
		if (digit % 2 == 0)
			evenCount++; 
		else
			oddCount++; 

		num /= 10; 
	}

	cout << "Even digits count: " << evenCount << endl;
	cout << "Odd digits count: " << oddCount << endl;

	return 0;
}