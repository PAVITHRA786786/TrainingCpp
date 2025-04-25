/*Check whether a given number can be expressed as the sum of two prime number

i/p
Enter a positive integer: 34
Output
34 = 3 + 31
34 = 5 + 29
34 = 11 + 23
34 = 17 + 17
NoofWays = 4*/

#include<iostream>
int getdigits(int num);
bool isPrime(int);
using namespace std;

int main()
{
	int num, countways = 0;
	cout << "Enter the number:" << endl;
	cin >> num;
	for (int i = 1;i < num;i++)
	{
		for (int j = i;j <= num;j++) {
			if ((isPrime(i)) && (isPrime(j))) {
				if (i + j == num) {
					cout << i << " + " << j << " = " << num << endl;
					countways++;
				}
			}
		}
	}
	cout << "No of ways = " << countways << endl;
		return 0;
	}
	


int getdigits(int num)
{
	int r;
	int countdigits = 0;
	int countprime = 0;
	while (num)
	{
		r = num % 10;
		cout << "r=" << r << endl;
		if (isPrime(r) == true) {
			cout << r << "is prime" << endl;
			countprime++;
		}
		num /= 10;
		countdigits++;
	}
	cout << "count=" << countdigits << endl;
	cout << "count=" << countprime << endl;

	if (countdigits == countprime)
		return 1;
	else
		return 0;
}
bool isPrime(int num)
{
	bool flag = false;
	if (num <= 1)
		return false;
	for (int itr1 = 2;itr1 <= num / 2;itr1++)
	{
		if (num % itr1 == 0)
		{
			flag = true;
			break;
		}
	}
	if (flag == false)
		return true;
	else
		return false;
}