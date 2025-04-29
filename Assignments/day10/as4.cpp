/*
Problem 4: Count Number of Zeros in a Number
Problem Statement:
Write a recursive function to count the number of zeros in an integer.
i/p: 102040
o/p: Number of zeros in 102040 is 3
*/

#include<iostream>
using namespace std;

int countnum(int);

int main()
{
	int n;
	cout << "Enter a number:" << endl;
	cin >> n;
	int result = countnum(n);
	cout << "Number of zeros in " << n << "is:" << result << endl;
	return 0;
}


int countnum(int n)
{
	int count = 0;
	if (n == 0)
	{
		return 1;
	}
	else
	{
		count = 0;
		if (n % 10 == 0)
		{
			count ++;
		}
	}
	n = n / 10;
	return count+ countnum(n);
	
}