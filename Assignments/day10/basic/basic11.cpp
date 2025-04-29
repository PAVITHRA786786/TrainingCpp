/*
Print All Odd Numbers from 1 to N
Given N, print all odd numbers up to N using a loop.
*/

#include <iostream>
using namespace std;

int main()
{
	int N;
	cout << "Enter a number: ";
	cin >> N;

	cout << "Odd numbers from 1 to " << N << " are: ";
	for (int i = 1; i <= N; i += 2)
	{
		cout << i << " ";
	}
	cout << endl;

	return 0;
}