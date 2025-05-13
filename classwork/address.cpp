/*
Basic Address book for adding ,deleting,updating,searching,listing of all address via simple menu systems

*/

#include<iostream>
#include<cstring>
#include<math.h>

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
int display(int);

int add(int n)
{
	
	//cout<<"Enter the number of person's address you want to enter" << endl;
	//cin >> n;
	struct address a;
	//for (int i = 0; i < n; i++) {
	cout << "Enter the name" << endl;
	cin >> a.name;
	cout << "Enter the houseNo" << endl;
	cin >> a.houseNo;
	cout << "Enter the street" << endl;
	cin >> a.street;
	cout << "Enter district" << endl;
	cin >> a.district;
	cout << "Enter state" << endl;
	cin >> a.state;

//}
	cout << "Address added successfully" << endl;
	//for (int i = 0; i < n; i++) {
		cout << "Name: " << a.name << endl;
		cout << "House No: " << a.houseNo << endl;
		cout << "Street: " << a.street << endl;
		cout << "District: " << a.district << endl;
		cout << "State: " << a.state << endl;
	//}
		return 0;
}

int del(char name)
{
	cout << "Enter the name of the address you want to delete" << endl;
	cin >> name;
	struct address a;
	cout << "Address deleted successfully" << endl;
	return 0;
}

int serach(char name)
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

int updated