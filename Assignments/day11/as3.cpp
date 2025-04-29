/*
sum of two prime number using arrays
*/

#include<iostream>
#define MAX 100
using namespace std;
bool isPrime(int);
int main()
{
	int arr[MAX];
	int num,count=0;
	cout<<"Enter the no of elements in the array: " << endl;	
	cin >> num;
	
	for (int i = 1;i <= num;i++)
	{
		if (isPrime(i)) {
			arr[count++] = i;
		}
	}
	for (int i = 0;i < count;i++)
	{
		cout << arr[i] <<endl;
	}
	for (int i = 0;i < count;i++)
	{
		for (int j = i;j < count;j++)
		{
			if (arr[i] + arr[j] == num)
			{
				cout << arr[i] << "+" << arr[j] << "=" << num << endl;
			}
		}
	}
	return 0;
}
bool isPrime(int num)
{
	bool flag = false;
	if (num <= 1)
		return false;
	for (int itr1 = 2;itr1 <= num / 2;itr1++)
	{
		if (num % itr1 == 0)
		{
			flag = true;
			break;
		}
	}
	if (flag == false)
		return true;
	else
		return false;
}