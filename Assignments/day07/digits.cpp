/*
write a program to read Sum and Product of digits in a given number

Input Format:
Read a positive integer N

Output Format:
Print the sum and product of digits of the number

Examples:
Input: N = 12
Output:
sum =3
product = 2.

Input: N = 1012
Output:
 Sum = 4
product = 2

*/


#include<iostream>
using namespace std;

int main()
{

	int sum = 0,num;
	int mul = 1;
	cout<< "Enter num value:" << endl;
	cin >> num;
	int r;
	
	while (num)
	{
		
			r = num % 10;
			num = num / 10;
			sum += r;

			if (r != 0) {
				mul *= r;
		}
			num /= 10;
		
	}
	
	cout<< " sum =" << sum;
	cout << " mul =" << mul;

	

}