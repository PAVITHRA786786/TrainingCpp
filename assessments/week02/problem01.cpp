/*
Problem Statement :Write the program for number and star pattern printing given n value.
Input Format : Take N as input of type integer.
Output Format : Print number and star pattern printing

Constraints:
4<=N<=10

Sample Input1:
5
Sample Output1:

*
*1*
*121*
*12321*
*1234321*
*123454321*
*1234321*
*12321*
*121*
*1*
*
*/

#include<iostream>
using namespace std;

#include<iostream>
using namespace std;

int main()
{
	
	int num,itr2,itr3;
	int num2= 1;
	cout << "Enter n value:" << endl;
	cin >> num;
	for (int itr1 = 1;itr1 <= num;itr1++) {
		for (num2 = 1, itr2 = 1;itr2 <= itr1;itr2++, num2++) 
				cout << num2;

			cout << endl;
		
	}
	
	for (int itr1 = num - 1;itr1 >= 1;itr1--) {
		for (num2 = 1, itr2 = itr1;itr2 >= 1;itr2--, num2++) 
				cout << num2;

			cout << endl;
		
	}
	return 0;
}



