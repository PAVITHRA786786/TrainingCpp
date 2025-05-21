#include<iostream>
#include<cstring>
#include"atm.h"

using namespace std;

void atm::setAccHolder(const char* acc) {
	strcpy(accHolder, acc);
}
char* atm::getAccHolder() {
	return accHolder;
}
void atm::setBal(float bal) {
	balance = bal;
}
float atm::getBal() {
	return balance;
}
void atm::deposite(float d) {
	balance += d;
	cout << "Deposited: " << d << endl;
}
void atm:: withdraw(float w) {
	if (w > balance) {
		cout << "Insufficient balance" << endl;
	}
	else {
		balance -= w;
		cout << "Withdrawn: " << w<< endl;
	}
}

void atm::display() {
	cout << "Account Holder: " << accHolder << endl;
	cout << "Current Balance: " << balance << endl;
}
