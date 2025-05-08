
/*

* * * * *
 * * * *
  * * *
   * *
	*
   * *
  * * *
 * * * *
* * * * *

*/


#include<iostream>
using namespace std;

void pattern(int);
void pattern(int n)
{
	int i, j,k;
	for (i = 0;i < n;i++)
	{
		for (j = 0;j < i;j++)//this loop prints spaces for each row
		{
			cout << " ";
			//cout << "+";
		}
		for ( k = 0;k < n - i;k++)//this loop prints the * for each row
		{
			cout << "* ";
		}
		cout << endl;
	}
	for (i = 1;i < n;i++)
	{
		for (j = 0;j < n-i-1;j++)//this loop prints spaces for each row
		{
			//cout << "+";
			cout << " ";
		}
		for (k = 0;k <= i ;k++)//this loop prints the * for each row
		{
			cout << "* ";
		}
		cout << endl;
	}
}
int main()
{
	int n = 5;
	pattern(n);
	return 0;
}