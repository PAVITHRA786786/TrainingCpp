/*
Calculator Using Switch-Case
Input two numbers and an operator (+, -, *, /).
Use switch to perform the operation.
*/

#include <iostream>
using namespace std;

int main()
{
	char op;
	float num1, num2;

	cout << "Enter operator (+, -, *, /): ";
	cin >> op;

	cout << "Enter two operands: ";
	cin >> num1 >> num2;

	switch (op)
	{
		case '+':
			cout << num1 << " + " << num2 << " = " << num1 + num2;
			break;
		case '-':
			cout << num1 << " - " << num2 << " = " << num1 - num2;
			break;
		case '*':
			cout << num1 << " * " << num2 << " = " << num1 * num2;
			break;
		case '/':
			if (num2 != 0)
				cout << num1 << " / " << num2 << " = " << num1 / num2;
			else
				cout << "Division by zero is not allowed.";
			break;
		default:
			cout << "Invalid operator";
			break;
	}

	return 0;
}