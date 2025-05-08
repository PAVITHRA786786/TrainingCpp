/*
program to fing sum of n natural numbers 
*/


#include<iostream>

using namespace std;


int main()
{
	int n;
	int sum = 0;
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		sum += i;

	}
	cout << "Sum of natural numbers :" << sum << endl;
	return 0;
}

