/*
pointer to  pointer
*/

#include<iostream>

using namespace std;

int main()
{
	int a[3][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	/* or  int a[3][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}} */

	for (int i = 0;i < 3;i++) //row
	{
		for (int j = 0;j < 5;j++) //column
			cout << "Address = " << (unsigned long int) & a[i][j] << "\t value = " << a[i][j] << endl;
	}
	cout << endl;

	int* ptr = nullptr;

	ptr = &a[0][0];

	cout << *ptr << endl;
	ptr++;
	cout << *ptr << endl;
	ptr++;
	cout << *ptr << endl;
	ptr++;
	cout << *ptr << endl;
	ptr++;
	cout << *ptr << endl;
	ptr++;
	cout << *ptr << endl;
	ptr++;
	cout << *ptr << endl;
	ptr++;
	
	//int** ptr1 = a;
	/*
	ptr=a[0];
	cout<<*ptr<<"\t/<<(unsigned long int )ptr<<endl;
	ptr++;
	cout<<*ptr<<"\t/<<(unsigned long int )ptr<<endl;
	ptr+2;
	cout<<*ptr<<"\t/<<(unsigned long int )ptr<<endl;
	ptr++;
	*/



	cout << endl;

	return 0;
}




/*

BA+IV*sizeof(dt) =>1D
BA + (R+C*sizeof(dt))=>2D
8568 + 0+0*4 => 8568 => 1
8568 + 0+1*4 => 8572 => 2 (72)
8568 + 0+2*4 => 8576 => 3
8568 + 0+3*4 => 8580 => 4
8568 + 0+4*4 => 8588 => 5



*/