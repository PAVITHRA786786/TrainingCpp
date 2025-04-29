/*
Print the Sum of Even Numbers from 1 to N
Given N, find the sum of all even numbers between 1 and N.
*/

#include <iostream>
using namespace std;

int main()
{
	int N, sum = 0;
	cout << "Enter a number: ";
	cin >> N;

	for (int i = 2; i <= N; i += 2)
	{
		sum += i;
	}

	cout << "Sum of even numbers from 1 to " << N << " is: " << sum << endl;

	return 0;
}