#include<iostream>
using namespace std;

int main()
{
	int n, m;
	cout << "Enter the start numbers:" << endl;
	cin >> n;
	cout << "Enter the end number:" << endl;
	cin >> m;
	for ( int i = 1;i <= 10;i++)
	{	
		for ( int j = n;j <= m;j++)
		{
			
			int mul = i * j;
			cout <<" "<< j << " * " << i << " = " << mul<< "\t";
		}
		cout << endl;
		
	}
	
	
	return 0;
}