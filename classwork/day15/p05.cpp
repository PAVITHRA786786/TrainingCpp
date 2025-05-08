/*
factorial of a number
*/

#include<iostream>
using namespace std;

int fact(int);
int main()
{
	int a=0;
	int result = fact(a);
	cout << "Factorial of a number :" << result << endl;
	return 0;
}
int fact(int n)
{
	cin >> n;
	int i, fact = 1;
	for (i = 1;i <= n;i++)
	{
		fact *= i;
	}
	/*
	while(n>=1)
	{
	fact*=n;
	n=n-1;
	}
	*/
	return fact;
}