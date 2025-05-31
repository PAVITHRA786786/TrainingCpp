/*
cpp program which involves collection of emp details,finance details stores the records in the file,
print record from the file.update an an emp name 
*/


#include<iostream>
#include<cstring>
#include<fstream>

using namespace std;

class Person
{
protected:
	char name[20];
	int age;
	int phno;

public:
	Person() {
		strcpy(name, ""); int age = 0; int phno = 0;
	}
	Person(const char* name, int age, int phno) {
		strcpy(this->name, name);
		this->age = age;
		this->phno = phno;
	}

	virtual void display()
	{
		cout << "Employee Details:" << endl;
		cout << "======================" << endl;
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Phone No: " << phno << endl;
	}
};

class Employee :public Person
{
protected:
	int e_id;
	int e_sal;
	char e_dept[20];
public:
	Employee() {
		strcpy(name, ""); int age = 0; int phno = 0; int e_id = 0; int e_sal = 0;
		strcpy(e_dept, "");
	}
	Employee(const char* name, int age, int phno, int e_id, int e_sal, const char* e_dept) :
		Person(name, age, phno)
	{
		this->e_id = e_id;
		this->e_sal = e_sal;
		strcpy(this->e_dept, e_dept);
	}

	void display() override
	{
		cout << "ID: " << e_id << endl;
		cout << "Salary: " << e_sal << endl;
		cout << "Department: " << e_dept << endl;
	}
};

class EmpFin : public Employee
{
protected:
	int e_pt;
	int e_pf;
	int e_days;
public:
	EmpFin() {
		strcpy(name, ""); int age = 0; int phno = 0; int e_id = 0; int e_sal = 0;
		strcpy(e_dept, ""); int e_pt = 0; int e_pf = 0; int e_days = 0;
	}
	EmpFin(const char* name, int age, int phno, int e_id, int e_sal, const char* e_dept, int e_pt, int e_pf, int e_days) :
		Employee(name, age, phno, e_id, e_sal, e_dept)
	{
		this->e_pt = e_pt;
		this->e_pf = e_pf;
		this->e_days = e_days;

	}

	void display() override
	{
		Person::display();
		Employee::display();
		cout << "P Tax: " << e_pt << endl;
		cout << "PF: " << e_pf << endl;
		cout << "No days: " << e_days << endl;
		int gs = (e_sal - e_pt - e_pf) / 30;
		gs = gs * e_days;
		cout << "Gross Sal: " << gs << endl;
	}

	void updateName(const char* newName) {
		strcpy(name, newName);

		cout << "Name updated to: " << name << endl;
	}
	void searchEmp(int id) {
		if (e_id == id) {
			cout << "Employee found: " << endl;
			display();
		}
		else {
			cout << "Employee not found." << endl;
		}
	}
};



int main()
{
	fstream fIO;
	EmpFin e("ABCD", 29, 89765, 110, 80000, "JKLM", 2000, 1200, 18);
	fIO.open("emp1.txt", ios::in | ios::out | ios::binary);
	if (!fIO.is_open())
	{
		cerr << "Error: opening file" << endl;
	}
	fIO.write((char*)&e, sizeof(e));

	fIO.close();


	fIO.open("emp1.txt", ios::in | ios::out | ios::binary);
	if (!fIO.is_open())
	{
		cerr << "Error: opening file" << endl;
	}
	EmpFin e1;
	fIO.read((char*)&e1, sizeof(e1));
	e1.display();
	e1.updateName("XYZ");

	fIO.seekp(0, ios::beg); 
	fIO.write((char*)&e1, sizeof(e1)); 

	e1.searchEmp(110); 
	
	fIO.close();


	return 0;
}

