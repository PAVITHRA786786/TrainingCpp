/*
sum of arrays using pointers and functions

*/

#include<iostream>

using namespace std;

int sumArr(int*, int);

int main()
{
	int list[] = { 1,2,3,4,5 };
	int cap = sizeof(list) / sizeof(list[0]);
	cout <<"\t"<< sumArr(&list[0], cap) << endl;
	//or
	//cout <<"\t"<< sumArr(list, cap) << endl;

	return 0;
}

int sumArr(int* ptr, int n)
{
	int sum = 0;
	//logic to calculate sum of the list
	//ptr converted to a array notation
	/*for (int i = 0;i < n;i++)
		sum += ptr[i];   //array notation 
	*/
	
	for (int i = 0;i < n;i++,ptr++)  //pointer notation
		sum += *ptr;

	return sum;
}