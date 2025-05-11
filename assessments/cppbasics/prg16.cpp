/*
Write a Program to Check the Prime Number
*/



#include<iostream>

bool isPrime(int);

using namespace std;

int main()
{
	int num;
	cin >> num;
	if (isPrime(num))
	{
		cout << "prime number" << endl;
	}
	else
	{
		cout << "not a prime number" << endl;
	}
	
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