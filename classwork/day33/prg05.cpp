#include<iostream>

using namespace std;

template<class T1,class T2>
float add(T1 a, T2 b)
{
	//T2 sum = a + b;
	//float sum = a + b;
	//return sum;
	return a + b;
}

int main()
{
	cout << add(10, 12.2) << endl;
	cout << add(12.2, 12) << endl;
	return 0;
}