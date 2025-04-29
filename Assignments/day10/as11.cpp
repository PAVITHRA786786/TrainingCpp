/*
Form a New Number from Two Numbers
Problem:
Form a new number using last digit of first number and first digit of second number.

Hint:

Last digit → (firstNumber % 10).
First digit → keep dividing secondNumber by 10 until it's < 10.
Then combine them (e.g., lastDigit * 10 + firstDigit).
*/

#include<iostream>
using namespace std;

int getFirstDigit(int);
int getLastDigit(int);


int main()
{
	int firstNo, secondNo;
	cout << "Enter two numbers:" << endl;
	cin >> firstNo >> secondNo;
	int lastDigit = getLastDigit(firstNo);
	int firstDigit = getFirstDigit(secondNo);
	int newNo = lastDigit * 10 + firstDigit;
	cout << "New number formed: " << newNo << endl;
	return 0;
}
int getFirstDigit(int num)
{
	while (num >= 10)
	{
		num = num / 10;
	}
	return num;
}
int getLastDigit(int num)
{
	return num % 10;
}