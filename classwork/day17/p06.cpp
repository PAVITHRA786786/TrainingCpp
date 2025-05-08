/*
1
2 3
4 5 6
7 8 9 10


*/



#include<iostream>

using namespace std;

void pattern(int);
void pattern(int n)
{
	int m = 1;
	int i, j;
	for (i = 0;i < n;i++)
	{
		for (j = 0;j <=i;j++)
		{
			cout << m++ <<" ";
		}
		cout << endl;
	}

}
int main()
{
	int n = 4;
	pattern(n);
	return 0;
}