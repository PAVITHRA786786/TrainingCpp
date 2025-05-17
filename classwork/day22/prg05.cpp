//reverse the array using pointer notation

#include<iostream>

using namespace std;

void revArr(int*, int);

void rev(int arr[], int n);
void display(int arr[], int);
int main()
{
	int list[] = { 1,2,3,4,5 };
	int n = sizeof(list) / sizeof(list[0]);
	rev(list, n);
	display(list, n);

	revArr(list, n) ;
	display(list, n);
	return 0;
}


void rev(int arr[], int n)
{
	int i;
	for (i = 0;i <= n / 2;i++)
	{
		int temp = arr[i];
		arr[i] = arr[n-1-i];
		arr[n-1-i] = temp;

		for (i = 0;i < n;i++)
		{
			cout <<arr[i]<<" ";
		}
		
	}
}

void revArr(int* ptr, int n)
{
	int t;
	int* start = nullptr;
	int* end = nullptr;
	start = ptr;
	end = ptr + (n - 1);//BA+n-1
	while (start < end)
	{
		//logic to change the values
		t = *start;
		*start = *end;
		*end = t;
		//counter 
		start++;
		end--;

		/*for (start = ptr, end = ptr + (n - 1);start<end;start++, end--)
		{
			t = *start;
			*start = *end;
			*end = t;
		}*/
	}
}

void display(int arr[], int n)
{
	for (int i = 0;i < n;i++)
	{
		cout << arr[i] << "";
	}
}