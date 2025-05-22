/*
prepare a class array which as the following features.
1).get biggest of array elements.
2).get array sorted in ascending order.
3).get array sorted in descending order.
*/

#include<iostream>
#define MAX 100
using namespace std;

class arr
{
private:
	int a[MAX];
	int n;
public:
	void set(int*,int n);
	void setn(int n);
	int getn();
public:
	int biggest(int*,int );
	int ascend(int*,int );
	int descend(int*,int );
};
void arr::setn(int no)
{
	n = no;
}
int arr::getn()
{
	return n;
}
void arr::set(int arr[],int n)
{
	for (int i = 0;i < n;i++)
	{
		a[i] = arr[i];
	}
}

int arr::biggest(int a[],int n)
{
	int big = a[0];
	for (int i = 0;i < n;i++)
	{
		if (big < a[i])
		{
			big = a[i];
		}
	}
	cout << "biggest number: " << big << endl;
	return 0;
}

int arr::ascend(int a[],int n)
{
	int i = 0;
	for (i = 0;i < n;i++)
	{
		for (int j = i + 1;j < n;j++)
		{
			if (a[i] > a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}

	}
	cout << "Ascending order:" << endl;
	for (int i = 0;i < n;i++)
		cout << a[i] << "\t";
	cout << endl;
	return 0;
}

int arr::descend(int a[],int n)
{
	int i, j = 0;
	for (i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			if (a[i] > a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}

	}
	cout << "Descending order:" << endl;
	for (int j = 0;j < n;j++)
		cout << a[j] << "\t";
	cout << endl;
	return 0;

}

int main()
{
	int a[MAX];
	int n;
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> a[i];
	}

	arr a1;
	a1.set(a,n);
	a1.biggest(a,n);
	a1.ascend(a,n);
	a1.descend(a,n);
	return 0;


}

