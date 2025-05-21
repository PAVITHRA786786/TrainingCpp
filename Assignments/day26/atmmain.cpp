/*
Q4. Simple Bank ATM Menu
Problem:
Create a class ATMAccount with members balance, accountHolder. 
Provide functions deposit(), withdraw(), and checkBalance() which modify and show balance. Simulate interaction in main().


*/

#include<iostream>
#include<cstring>
#include"atm.h"

using namespace std;

int menu();

int main()
{
	atm a;
	char acc[] = "Nithin";
	float bal = 5000.0;
	a.setAccHolder(acc);
	a.setBal(bal);
	a.display();
	int ch;
	while (1)
	{
		ch = menu();
		switch (ch)
		{
		default:
			cout << "Invalid choice" << endl;
			break;
		case 1:
			float dep;
			cout << "Enter amount to deposit" << endl;
			cin >> dep;
			a.deposite(dep);
			break;
		case 2:
			float w;
			cout << "Enter amount to withdraw" << endl;
			cin >> w;
			a.withdraw(w);
			break;
		case 3:
			cout << "Current balance: " << a.getBal() << endl;
			break;
		case 4:
			exit(0);
			break;

		}
	}
	

	return 0;
}
int menu()
{
	int ch;
	cout << "1.Deposite" << endl;
	cout << "2.withdraw" << endl;
	cout << "3.check balance" << endl;
	cout << "4.exit" << endl;
	cout << "Enter your choice" << endl;
	cin >> ch;
	return ch;
}