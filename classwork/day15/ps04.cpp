/*
program to fing sum of n natural numbers
*/


#include<iostream>

using namespace std;
int n(int);

int main()
{
	int a=0;
	int res = n(a);
	cout << "Sum of natural numbers :" << res << endl;

	return 0;
}

int n(int n)
{
	int sum = 0;
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		sum += i;

	}
	return sum;
}