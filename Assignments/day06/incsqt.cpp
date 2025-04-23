/*
Problem Statement:- Write the logic to for incrementing Squared Number-Star Pattern.
Input Format      : Take N as input of type integer.
Output Format     : Print incrementing Squared Number-Star Pattern.

Constraints:
2<=N<=10
Sample Input:
5
Sample Output:
1*2*3*4*5
6*7*8*9*10
11*12*13*14*15
16*17*18*19*20
21*22*23*24*25
*/


/*
#include<iostream>
using namespace std;

int main(){



int itr1, itr2, n;
int count;
cout << "Enter n vaue:" << endl;
cin >> n;

itr1 = 1;
while (itr1 <= (n * n))
{
	if (itr1 % n == 0) {
		cout << itr1 << endl;
	}
	else
		cout << itr1 << "*";
	itr1++;
}
}*/