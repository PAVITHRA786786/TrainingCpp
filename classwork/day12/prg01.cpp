/*
* col1
10 20 30
40 50 60
70 80 90
*/


#include<iostream>
#define ROW 3
#define COL 3
using namespace std;

int main()
{
    int arr1[ROW][COL] = {{ 10,20,30 }, { 40,50,60 }, { 70,80,90 }
};
    int arr2[ROW][COL] = { 10,20,30,40,50,60,70,80,90 };
    int arr3[ROW][COL];

    for (int i = 0, count = 0;i < ROW;i++)
    {
        for (int j = 0;j < COL;j++)//iterations to access items int arrray
            cout << "Address of arr1[" << count++ << "] = " << (unsigned long int) & arr1[i][j] << " value = " << arr1[i][j]
            << endl;
	}
    cout << "========================" << endl;
    for (int i = 0, count = 0;i < ROW;i++)
    {
        for (int j = 0;j < COL;j++)//iterations to access items int arrray
            cout << "Address of arr2[" << count++ << "] = " << (unsigned long int) & arr2[i][j] << " value = " << arr2[i][j]
            << endl;
    }
    cout << "========================" << endl;
    for (int i = 0, count = 0;i < ROW;i++)
    {
        for (int j = 0;j < COL;j++)//iterations to access items int arrray
        {
            cout << "enter the " << count++ << "items values";
            cin >> arr3[i][j];
        }
    }
    cout << "========================" << endl;
    for (int i = 0, count = 0;i < ROW;i++)
    {
        for (int j = 0;j < COL;j++)//iterations to access items int arrray
            cout << "Address of arr2[" << count++ << "] = " << (unsigned long int) & arr2[i][j] << " value = " << arr2[i][j]
            << endl;
    }
    int arr4[ROW][COL] = { 101,102,103,104 };
    int arr5 = { 0, };
    int arr6 = { '\0', };
    //bzero or memset or explicitly run the loop to reinit it to zero
    return 0;
}
