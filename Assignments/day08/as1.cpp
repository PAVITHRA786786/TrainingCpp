
#include<iostream>
int getdigits(int num);
bool isPrime(int);
using namespace std;

int main()
{
	int num,count;
	cout << "Enter the number:" << endl;
	cin >> num;
	count = 0;
	int i = 1;
	while (true) {
		if (getdigits(i++)) {
			cout << "counted" << endl;
			count++;
			if (count == num)
				break;
		}
		else
			cout << "not counted" << endl;
	}
	

	cout << "I=" << i - 1 << endl;
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