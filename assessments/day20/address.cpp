/*
Basic Address book for adding ,deleting,updating,searching,listing of all address via simple menu systems

*/

#include<iostream>
#include<cstring>
#include<math.h>
#define CAP 100

using namespace std;


struct address
{
	char name[100];
	char houseNo[100];
	char street[100];
	char district[100];
	char state[100];

};
struct book
{
	char name[100];
	char houseNo[100];
	char street[100];
	char district[100];
	char state[100];

};

int add(int);
int del(char);
int search(char);
int update(char);
int menu(int);
void display();

int main()
{
	add('a');
	return 0;
	menu('n');
	return 0;

}
int add(int n)
{
	
	cout<<"Enter the number of person's address you want to enter" << endl;
	cin >> n;
	struct address a[CAP];
	for (int i = 0; i < n; i++) {
	cout << "Enter the name" << endl;
	cin >> a[i].name;
	cout << "Enter the houseNo" << endl;
	cin >> a[i].houseNo;
	cout << "Enter the street" << endl;
	cin >> a[i].street;
	cout << "Enter district" << endl;
	cin >> a[i].district;
	cout << "Enter state" << endl;
	cin >> a[i].state;

}
	cout << "Address added successfully" << endl;
	for (int i = 0; i < n; i++) {
		cout << "Name: " << a[i].name << endl;
		cout << "House No: " << a[i].houseNo << endl;
		cout << "Street: " << a[i].street << endl;
		cout << "District: " << a[i].district << endl;
		cout << "State: " << a[i].state << endl;
	}
		return 0;
}

int del(char name)
{
	cout << "Enter the name of the address you want to delete" << endl;
	cin >> name;
	struct address a;
	
	//if(strcmp()
	cout << "Address deleted successfully" << endl;
	return 0;
}

int search(char name)
{
		cout << "Enter the name of the address you want to search" << endl;
	cin >> name;
	struct address a;

	cout << "Address found successfully" << endl;
	cout << "Name: " << a.name << endl;
	cout << "House No: " << a.houseNo << endl;
	cout << "Street: " << a.street << endl;
	cout << "District: " << a.district << endl;
	cout << "State: " << a.state << endl;
	return 0;
}
void display()
{
	cout << "Enter the name of the address you want to display" << endl;
	struct address a;
	cout << "Address found successfully" << endl;
	cout << "Name: " << a.name << endl;
	cout << "House No: " << a.houseNo << endl;
	cout << "Street: " << a.street << endl;
	cout << "District: " << a.district << endl;
	cout << "State: " << a.state << endl;
	
}

int menu(int n) {
	cout << "Enter your choice :" << endl;
	cin >> n;
	switch (n) {
	case 1:
		cout << add;
		break;
	case 2:
		cout << del;
		break;
	case 3:
		cout << update;
		break;
	case 4:
		cout << search;
		break;
	case 5:
		cout << display;
		break;
	default:
		cout << "Enter valid one" << endl;
		break;
	}
}
