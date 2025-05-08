/*
remove duplicates from a array
*/


#include<iostream>

using namespace std;

int main()
{
	int arr[] = { 10,20,30,40,50,10 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int i, j, k;
	for (i = 0;i < n;i++)
	{
		for (j = i + 1;j < n;)
		{
			if (arr[i] == arr[j])
			{
				//shifting of elements to left side
				for (k = j;k < n - 1;k++)
                 arr[k] = arr[k + 1];

				n--;//reduce the size of dup item found after shifting
			}
			else
			j++;//no duplication item present int the next element

			}
		}
	
	for (i = 0;i < n;i++)
		cout << arr[i] << ",";
	cout << endl;
	return 0;
}
	