/*
Increment and decrement
*/

#include<iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;
	cout << "the number is " << num << endl;
	num++;
	cout << "After pre increment: " << num << endl;
	++num;
	cout << "After pre increment: " << num << endl;
	num += 1;
	cout << "After increment by 1 the number is " << num << endl;
	num--;
	cout << "After pre decrement: " << num << endl;
	--num;
	cout << "After pre decrement: " << num << endl;
	num -= 1;
	cout << "After decrement by 1 the number is " << num << endl;
	return 0;

}