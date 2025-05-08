/*
given array is a palindrome or not
*/

#include<iostream>
#define MAX 100

using namespace std;

int main()
{
	int arr[MAX],n;
	cin >> n;
	int flag = 1;
	for (int i = 0;i <= n/2,n>0;i++)
	{
		arr[i] != arr[n - i - 1];
		flag = 1;
		break;
	}
	if (flag == 1)
	{
		cout << " Palindrome" << endl;
	}
	else
		cout << " Not palindrome" << endl;
	return 0;
}