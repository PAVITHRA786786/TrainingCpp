/*
GCD
*/

#include <iostream>
using namespace std;

int main()
{

	int a, b;
	cin >> a >> b;

	while (a != b)
	{
		if (a > b)
				a -= b;
			else
				b -= a;
	}

	cout << "GCD is: " << a << endl;
	
	/*
	int a, b,gcd=0,i;
	cin >> a >> b;
	for ( i = a;i >= 2;i--)
	{
		if (((a % i) == 0) && ((b % i) == 0))
		{
			gcd = i;
			break;
		}
		cout << gcd;
	}
	*/

	/*
	int main()
	{
	int n1=60,n2=70,r,q;
	int count=0;
	while(true)
	{
	r=n2 % n1;
	if(r==0)
	break;
	n2=n1;
	n1=r;
	count++;
	}
	cout<<"n1:"<<n1<<endl;
	cout<<"count="<<count<<endl;
	return 0;
	}
	*/
	
	/*
	//mod(a * b//GCD(a,b)

	//int z=(13*7)/n1;
	//cout<<z<<cout;
	*/
	return 0;
}


