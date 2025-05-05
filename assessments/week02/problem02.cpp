/*
Objective: Write a program to check if a given number is an Armstrong number

Requirements:

Use a loop to calculate the sum of cubes of the digits of the number

Compare the sum with the original number to determine if it's an Armstrong number

Example:
Input: 153
Output: Armstrong number
explanation:
(since (1^3 + 5^3 + 3^3 = 153))
*/

#include<iostream>
using namespace std;



int getDigits(long int);
int armStrongNo(long int, int);

int main()
{
	long int num;
	cout<< "Enter a number:" << endl;
	cin >> num;
	int ret = getDigits(num);
	ret = armStrongNo(num, ret);
	if (ret == 1)
		cout << "Armstrong number" << endl;
	else
		cout << "Not a Armstrong number" << endl;

	return 0;
}

int getDigits(long int num)
{
	int digits = 0;
	while (num)
	{
		int r = num % 10;
		digits++;
		num /= 10;
	}
	return digits;

}

int armStrongNo(long int num, int mul)
{
	long int sum = 0, r;
	long int temp = num;
	long int prod = 1;
	while (temp)
	{
		prod = 1;
		r = temp % 10;
		for (int i = 0;i < mul;i++)
			prod *= r;
		sum = sum + prod;
		temp /= 10;
	}
	cout << sum << endl;
	if (sum == num)
		return 1;
	else
		return 0;

}