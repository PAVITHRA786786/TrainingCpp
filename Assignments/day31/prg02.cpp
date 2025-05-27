/*
Problem 2: Employee Salary Calculation with Multiple Roles
Concepts: Class, Multiple Inheritance, Constructor, Method Overloading

Problem Statement: Create a class Employee with basic details (empId, name). Create two base classes Developer and Manager which inherit Employee and contain role-specific data (coding hours and team size respectively). Derive a class TechLead from both Developer and Manager. Use constructors to initialize data. Overload a function calculateSalary() to:

Calculate salary based on only coding hours
Calculate salary based on coding hours + team size
Input:

EmpId: 501
Name: Rajesh
Coding Hours: 120
Team Size: 5
Expected Output:

Tech Lead Info:
EmpId: 501
Name: Rajesh

Salary based on coding: ₹60000
Salary based on coding + team: ₹85000
Assume ₹500/hour and ₹5000/team member
*/


#include<iostream>
#include<cstring>

using namespace std;

class Employee {
private:
	int e_id;
	string e_name;
public:
Employee(int id, string name) : e_id(id), e_name(name) {}

	void display() const {
		cout << "Tech Lead Info:" << endl;
		cout << "EmpId: " << e_id << endl;
		cout << "Name: " << e_name << endl;
	}
};

class Developer : public Employee {
private:
	int c_hours;
public:
	Developer(int id, string name, int hour) : Employee(id, name), c_hours(hour) {}

	int calculateSalary() const {
		return c_hours * 500; 
	}
};

class Manager : public Employee {
private:
		int t_size;
public:
Manager(int id, string name, int size) : Employee(id, name), t_size(size) {}

	int calculateSalary(int n) const {
		if(n==1)
		return t_size * 5000; 
	}
};

class TechLead : public Employee,public Developer, public Manager {
private:
	int tot_salary;
public:
TechLead(int id, string name, int hour, int size) 
		: Employee(id, name), Developer(id, name, hour), Manager(id, name, size) {
		tot_salary=Developer::calculateSalary()+ Manager::calculateSalary(1); 
	}

	void display(int n) const {
		if (n == 1) {
			display(0);
			cout << endl;
			cout << "Salary based on coding: ₹" << Developer::calculateSalary() << endl;
			cout << "Salary based on coding + team: ₹" << tot_salary << endl;
		}
	}
};


int main()
{
	int e_id, c_hour, t_size;
	string e_name;

	cout << "Enter EmpId: ";
	cin >> e_id;
	cout << "Enter Name: ";
	cin >> e_name;
	cout << "Enter Coding Hours: ";
	cin >> c_hour;
	cout << "Enter Team Size: ";
	cin >> t_size;

	TechLead t(e_id, e_name, c_hour, t_size);
	t.display(1);

	return 0;
}
