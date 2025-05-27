#include<iostream>

using namespace std;

class Data
{
public:
	int a;
	void print() { cout << "a is " << a << endl; }
};

int main()
{
	Data d, * dp;
	dp = &d; // pointer to object
	int Data::*ptr = &Data::a;//pointer to datamember 'a'
	d.*ptr = 10;
	d.print();
	dp->*ptr = 20;
	dp->print();
	return 0;
}