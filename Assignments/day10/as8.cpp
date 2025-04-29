/*Find the Second Last Digit of a Number
Problem :
Given a positive integer, find its second last digit.

Hint :

	First, divide number by 10 (n / 10) to remove the last digit.
	Then get last digit of the result using modulo(% 10).
	*/


#include<iostream>
using namespace std;

int getdigits(int);
int main()
{
	int n;
	cout << "Enter a number:" << endl;
	cin >> n;
	int result = getdigits(n);
	cout << "second last digit of" << n << "is:" << result << endl;
	return 0;

}
int getdigits(int num)
{
	if (num < 10)
	{
		return -1; 
	}
	else
	{
		num = num / 10; 
		return num % 10; 
	}
}