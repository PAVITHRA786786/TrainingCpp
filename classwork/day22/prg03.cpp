/*
find the maximum of two numbers using pointers

*/

#include<iostream>

using namespace std;

int max2Nos(int *, int *);
void dispEq(int);
void dispAppName(char*);

int main()
{
	int v1 = 20, v2 = -10;
	char appName[50] = "MAX of two numbers";
	dispEq(50);
	dispAppName(appName);
	dispEq(50);
	cout << "\t"<<max2Nos(&v1, &v2) << endl;
	dispEq(50);

	return 0;
}

int max2Nos(int* x, int* y)
{
	/*int retvalue = 0;
	//logic to find max of 2 numbers and assign it to retvalue
	
	if (*x < *y)
		retvalue = * y;
	else 
		retvalue = *x;
		//or
	retvalue=(*x > *y) ? (*x) : (*y);
	return retvalue;*/

	return((*x > *y) ? *x : *y);
}

void dispEq(int n)
{
	for (int i = 0;i < n;i++)
		cout << "=";
	cout << endl;

}

void dispAppName(char* appName)
{
	cout << "\t" << appName << "\t" << endl;
}

