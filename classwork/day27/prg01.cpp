#include<iostream>
#include<cstring>

using namespace std;

class Employee
{
//public:
private:
	int e_id;
	string e_name;

public:
	void init(int id, string n)
	{
		e_id = id;
		e_name = n;
	}
	void printDetails() {
		cout << e_id << "\t" << e_name << endl;
	}
};

int main()
{
	Employee e;
	e.init(101, "abcd");
	e.printDetails();

	/*e.e_id = 101;
	e.e_name = "annu";
	Employee* ptr = &e;

	cout << e.e_id << "\t" << e.e_name << endl;

	ptr->e_id = 201;
	cout << e.e_id << "\t" << e.e_name << endl;*/

}