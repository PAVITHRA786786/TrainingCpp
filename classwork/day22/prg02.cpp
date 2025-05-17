#include<iostream>

using namespace std;

int main()
{
	int a[3] = { 1,2,3 };
	cout << a[0] << a[1] << a[2] << endl;

	int* ptr = nullptr;
	//ptr = &a[0];=> ptr=&*(a+0) =>  ptr=a+0    => ptr=a
	ptr = a;
	cout << *ptr << endl;
	//ptr = &a[1]; //ptr=(a+1) => ptr=ptr+1 =>  ptr+1  => ptr++
	ptr++;
	cout << *ptr << endl;
	//ptr=(a+2) => ptr=ptr+2 =>  ptr+2  => ptr++
	//ptr = &a[2];
	ptr++;
	cout << *ptr << endl;

	return 0;
}