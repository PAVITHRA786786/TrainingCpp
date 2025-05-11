/*
Write a Program to Find the Nth Term of the Fibonacci Series
*/

#include<iostream>

using namespace std;

int main()
{
	int n, t1 = 0, t2 = 1, nextTerm = 0;
	cin >> n;
	if (n == 0)
		return t1;
	
	for (int i = 2; i <= n; ++i)
	{
		
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
		
	}
	cout<<"Nth Term: "<<nextTerm<<endl;
	cout << endl;
	return 0;
}