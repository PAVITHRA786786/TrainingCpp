#include<iostream>
#include "primefun.h"

using namespace std;

int main()
{
	int num;
	cout << "Enter the number:" << endl;
	cin >> num;
	bool ret = isPrime(num);
	if (ret == true)
		cout << "Given number :" << num << " is a prime number" << endl;
	else
		cout << "Given number :" << num << " is not a prime number" << endl;
	return 0;
}