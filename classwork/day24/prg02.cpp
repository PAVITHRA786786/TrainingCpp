/*
nested struct
*/

#include<iostream>

using namespace std;
/*
struct Date {
	int day, month, year;
};
*/

typedef struct Date {
	int day, month, year;
}DATE;

typedef struct address
{
	int hNo;
	int pincode;
	string addrLine1;//mand
	string addrLine2;//optional
	string city;
	string state;

}ADDRESS;

struct Employee
{
	int id;
	string name;
	//DATE joiningDate;
	struct DATE {    //structure within another structure
		int day, month, year;
	}D;
	ADDRESS addr;
};

int main()
{
	struct Employee e;
	e.id = 101;
	e.name = "bhima";
	//e.joiningDate.day = 10;
	//e.joiningDate.month = 4;
	//e.joiningDate.year = 2025;

	e.D.day = 10;
	e.D.month = 4;
	e.D.year = 2025;
	e.addr.city = "Bangalore";
	e.addr.state = "Karnataka";
	cout << sizeof(e) << endl;//cout << sizeof(Employee) << endl;
	cout << sizeof(e.id) << endl;
	cout << sizeof(e.name) << endl;
	cout << sizeof(e.D.day) << endl;
	cout << sizeof(e.addr) << endl;

	

	//cout << e.id << "\t" << e.name << "\t" << e.joiningDate.day << "\t" << e.joiningDate.month <<"\t" <<
	//e.joiningDate.year <<"\t"<< e.addr.city <<"\t"<< e.addr.state <<endl;

	cout << e.id << "\t" << e.name << "\t" << e.D.day << "\t" << e.D.month<< "\t" <<
	e.D.year <<"\t"<< e.addr.city <<"\t"<< e.addr.state <<endl;

	return 0;
}