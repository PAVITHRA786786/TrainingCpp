/*
nested if
*/


#include<iostream>

using namespace std;

int main()
{
	int a, b, c, d,e;
	cin >> a >> b >> c >> d >> e;
	if (a > b)
	{
		if (a > c)
		{
			if (a > d)
			{
				if (a > e)
				{
					cout << a << "is greater" << endl;
				}
				else
				{
					cout << e << "is greater" << endl;
				}
				
			}
		}
	
	}
	else
		if (b > c)
		{
			if (b > d)
			{
				
				if (b > e)
				{
					cout << b << "is greater" << endl;
				}
			}
		}
		else
			if (c > d)
			{
				if (c > e)
				{
					cout << c << "is greater" << endl;
				}
			}
			else
		if (d > e)
		{
			cout << d << "is greater" << endl;
		}
		else {
			cout << e << "is greater" << endl;
		}
		
	return 0;
}