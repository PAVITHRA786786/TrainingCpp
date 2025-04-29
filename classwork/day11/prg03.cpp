/*
store odd elements in the first half array and even elements in the second half of the array
*/

#include<iostream>

using namespace std;	

int main()
{
	int a[10];
	int i,countOdd,countEven;
	
	for (i = 0,countOdd = 0;i < 10;i++)
	{
		if (i % 2 != 0)
		{
			a[countOdd] = i;
			countOdd++;
		}
	}
	for (i = 0,countEven = countOdd;i < 10;i++)
	{
		if (i % 2 == 0)
		{
			a[countEven] = i;
			countEven++;
		}
	}
	for (i = 0;i < 10;i++)
		cout << a[i] << endl;
			

	return 0;

}
