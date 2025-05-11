/*
Write a Program to Find the Sum of the First N Natural Numbers
*/

#include<iostream>

using namespace std;

int main()
{
	int num, i, sum = 0;
	cin >> num;
	for (i = 1;i <= num;i++)
	{
		sum += i;
	}
	cout << "the Sum of the First N Natural Numbers: " << sum << endl;

	return 0;
}