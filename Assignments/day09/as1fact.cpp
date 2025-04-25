#include<iostream>
using namespace std;

int fact(int);
int main()
{
	int ret = 0;
	ret = fact(5);
	cout << "ret: " << ret << endl;
	return 0;
}

int fact(int v)
{
	int fac = 1;
	cout << v << endl;
	if (v ==0||v==1)
		return 1;
	fac = v * fact(v - 1);
	return fac;
}