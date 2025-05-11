/*
Write a Program to Print the Maximum Value of an Unsigned int Using One's Complement (~) Operator
*/

#include<iostream>

using namespace std;

int main()
{
	unsigned int max = 0;
	max = ~max;
	cout <<"Max value : "<< max << endl;
	return 0;
}