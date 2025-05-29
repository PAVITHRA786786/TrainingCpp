#include<iostream>

using namespace std;

template<class T>
void mySwap(T& a, T& b)
{
	T t = a;
	a = b;
	b = t;
}

int main()
{
	int a = 10, b = 20;
	float x = 30.3, y = 55.5;
	cout << "a= " << a << "\tb= " << b << endl;
	mySwap(a, b);
	cout << "a= " << a << "\tb= " << b << endl;
	cout << "x= " << x << "\ty= " << y << endl;
	mySwap(x, y);
	cout << "x= " << x << "\ty= " << y << endl;
	char c = 'a', d = 'b';
	cout << "c= " << c << "\td= " << d << endl;
	mySwap(c, d);
	cout << "c= " << c << "\td= " << d << endl;
	
	return 0;

}