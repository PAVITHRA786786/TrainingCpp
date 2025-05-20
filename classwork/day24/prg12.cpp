// reference

#include<iostream>

using namespace std;

void swap(int&, int&);
int add(int x, int y)
{
	return x + y;
}
int main()
{
	/*int a = 10;
	int &&b = 101;
	cout << a << "\t" << b << endl;

	/*cout << a << "\t" << b << endl;
	b = 101;
	cout << a << "\t" << b << endl;*/

	int a = 10, b = 20;
	swap(a, b);
	cout << "a= " << a << "\tb= " << b << endl;
	cout<<add(a,b)<<endl;
	cout << add(10, 20) << endl;


	return 0;
}

void swap(int& x, int& y)
{
	int t;
	t = x;
	x = y;
	y = t;
}