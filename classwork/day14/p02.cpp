/*
problem statemet:find out the even numbers between start range and end range
*/

#include<iostream>

using namespace std;

int main()
{
	int i, num1, num2;
	cin>> num1 >> num2;
	cout << "Even numbers are:" << endl;
	for (i = num1; i <= num2; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << " ";
		}
	}
		
	return 0;
}