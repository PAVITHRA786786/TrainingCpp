/*
scan the elements of array and check given number is present in the array
*/

#include <iostream>
#define CAP 10
using namespace std;

int main()
{
	int arr[CAP];
	int i, num;
	cout << "Enter the elements of the array: " << endl;
	for (i = 0; i < CAP; i++)
	{
		cin >> arr[i];
	}
	cout<< "The elements of the array are: " << endl;
	for (i = 0; i < CAP; i++)
	{
		cout << arr[i];
	}
	cout << "Enter the number to search:" << endl;
	cin >> num;
	int found = 0;
	for (i = 0;i < CAP;i++)
	{
		if (arr[i] == num)
		{
			found = 1;
			break;
		}
	}
		if (found == 1)
		{
			cout << "Number" << num << "is present in the array: " <<i<< endl;
		}
		else
			cout << "Number" << num << "is not present in the array: " << endl;
		return 0;
	
}
