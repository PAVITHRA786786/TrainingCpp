#include<iostream>

using namespace std;

class Person {
protected:
	string name;
	char g;
	int age;
	int phno;
public:
	Person(string n, char g, int a, int pno) : name(n), g(g), age(a), phno(pno) {}

	void dispPerson()
	{
		cout << "Name: " << name << endl;
		cout << "Gender: " << g << endl;
		cout << "Age: " << age << endl;
		cout << "Phno: " << phno << endl;
	}

};

class Employee :private Person
{
protected:
	int e_id;
	int e_sal;
	string e_dept;
public:
	Employee(string n, char g, int a, int pno, int id, int s, string dept) :
		Person(n, g, a, pno),
		e_id(id), e_sal(s), e_dept(dept) {}

	void dispEmp()
	{
		dispPerson();
		cout << "ID: " << e_id << endl;
		cout << "Dept: " << e_dept << endl;
		cout << "Salary: " << e_sal << endl;
	}

};

class EmpFin :private Employee
{
private:
	int e_pt;
	int e_pf;
	int e_vp;
	int e_days;
public:
	EmpFin(string n, char g, int a, int pno, int id, int s, string dept, int pt, int pf, int vp, int ndays) :
		Employee(n, g, a, pno, id, s, dept),
		e_pt(pt), e_pf(pf), e_vp(vp), e_days(ndays) {}

	void dispEmpFin()
	{
		//dispPerson();
		dispEmp();
		cout << "P Tax: " << e_pt << endl;
		cout << "PF: " << e_pf << endl;
		cout << "VP: " << e_vp << endl;
		cout << "No days: " << e_days << endl;
		int gs = (e_sal - e_pt - e_pf) / 30;
		gs = gs * e_days;
		cout << "Gross Sal: " << gs << endl;
	}
};

int main()
{
	EmpFin e("abcd", 'M', 22, 8976, 293956, 26000, "AM", 200, 2600, 100000, 24);
	EmpFin e1("jklm", 'M', 22, 8976, 293956, 26000, "AM", 200, 2600, 100000, 31);
	e.dispEmpFin();
	e1.dispEmpFin();

	return 0;
}