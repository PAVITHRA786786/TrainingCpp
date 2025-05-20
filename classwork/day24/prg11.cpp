/*
inline
*/

#include<iostream>
#define sq(x) x*x
using namespace std;

inline int square(int x)
{
	return x * x;
}

int main()
{
	cout << square(2+3) << endl;
	cout << sq(2+3) << endl;
	return 0;
}
