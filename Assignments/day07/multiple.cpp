#include<iostream>
using namespace std;

int main()
{
	int n,m;
	cout << "Enter the start numbers:" << endl;
	cin >> n;
	cout << "Enter the end number:" << endl;
	cin >> m;
	for (int i = n;i <=m;i++)
	{
		for (int j = 1;j <= 10;j++)
		{
			
			int mul = i * j;
			cout << i <<" * " << j <<" = "<<mul<< endl;
		}
		//cout << endl;
		cout << "---------------- "<< endl;
	}
	return 0;
}