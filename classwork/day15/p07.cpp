/*
check if a number is palindrome or not
*/


#include<iostream>

using namespace std;

int main()
{
	int rev, n, sum = 0;
	cin >> n;
	int temp = n;
	while (n > 0)
	{
		rev = n % 10;
		sum = (sum * 10) + rev;
		n = n / 10;
	}
	if(temp==sum)
	cout << "Palindrome" << endl;
	else
		cout << "Not Palindrome" << endl;
	return 0;
	
}

