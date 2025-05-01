#include<iostream>
#include<cstdio>

using namespace std;

void display(int[], int);
void updateArr(int[], int);
void displayPtr(int*, int);

int main()
{
	int a[] = { 1,3,5,7,2,4,6,8 };
	int n = sizeof(a) / sizeof(a[0]);
	display(a, n);
	displayPtr(a, n);
	updateArr(a, 3);
	display(a, n);
	return 0;
}


void display(int arr[], int CAP)
{
	for (int i = 0;i < CAP;i++)
		cout << arr[i] << endl;
}

void displayPtr(int* arr, int CAP)
{
	for (int i = 0;i < CAP;i++)
		cout << arr[i] << endl;
}


void updateArr(int arr[], int pos)
{
	arr[pos] = 444;
}