/*
store odd elements in the first half array and even elements in the second half of the array
*/

#ifdef __INTELLISENSE__
    #pragma diag_suppress 28
#endif

#include<iostream>

using namespace std;

int main()
{
	int a[] = { 11,13,12,15,8,6,4,3,7,1 };
	int i, countOdd, countEven;
	constexpr int noElems = sizeof(a) / sizeof(a[0]);
	int outputArray[noElems];
	cout << "No of elements present:" << noElems << endl;

	for (i = 0, countOdd = 0; i < noElems; i++)
	{
		if (a[i] % 2 != 0)
		{
			outputArray[countOdd] = a[i];
			countOdd++;
		}
	}
	for (i = 0, countEven = countOdd; i < noElems; i++)
	{
		if (a[i] % 2 == 0)
		{
			outputArray[countEven] = a[i];
			countEven++;
		}
	}

	
	
	for (i = 0;i < noElems;i++)
		cout << outputArray[i] << endl;


	return 0;

}
