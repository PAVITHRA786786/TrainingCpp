/*
lowset and largest number of a array
*/

#include<iostream>
#define CAP 100
using namespace std;

int main()
{
	int arr[CAP] = { 10,20,30,40,50 };
	int n= sizeof(arr) / sizeof(arr[0]);
	//cin.getline(arr, 99);
	int i = 0, min = arr[0], max = arr[0];
	for (i = 0;i < n;i++)
	{
		if(max<arr[i])
			min = arr[i];
		if (min>arr[i])
			max = arr[i];

	}
	cout <<"min="<< min << endl;
	cout << "max=" << max << endl;
	
	return 0;
}