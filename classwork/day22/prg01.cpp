#include<iostream>

#define MAX 3

using namespace std;

int main()
{
	int* ptr = nullptr;
	int a = 10;
	cout <<"value of a "<< a << endl;
	cout << "address of a "<< & a << endl;
	cout <<"value of ptr "<< ptr << endl;
	cout << "address of ptr "<< & ptr << endl;
	ptr = &a;
	cout << ptr << endl;
	cout << *ptr << endl;
	*ptr = 20;
	cout << "value of a " << a << endl;
	cout << "contents of ptr " << *ptr << endl;
	

	return 0;
}