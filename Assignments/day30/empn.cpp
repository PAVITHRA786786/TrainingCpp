/*
Employee Record Management
---
✅ Problem Statement: Employee Record Management using Linked List
Design a system in C++ to manage a list of employees using a singly linked list. Each Employee has the following details:

int id: Unique identifier
string name: Employee name
float salary: Monthly salary
You are required to implement the following operations:

Add Employee – Add a new employee to the end of the list.
Display All Employees – Show details of all employees.
Delete Employee by ID – Remove an employee by their ID.
Search Employee by Name – Return all employees whose names match a given name (case-sensitive).
Update Salary by ID – Update the salary of an employee using their ID.
Count Total Employees – Return the count of employees in the list.
🔧 Constraints
IDs are unique integers.
Name is a non-empty string with at most 50 characters.
Salary is a positive float.
Maximum number of employees: 1000
🧱 Class and Structure Requirements
Define an Employee class.
Create a linked list where each node contains an Employee object.
Avoid using STL containers like vector or list.
📥 Input Format (For Testing)
Use a menu-based interface:

1. Add Employee
2. Display All Employees
3. Delete Employee by ID
4. Search Employee by Name
5. Update Salary by ID
6. Count Employees
0. Exit
📤 Sample Test Case 1
Input:

1
101 John 50000
1
102 Alice 60000
1
103 Bob 55000
2
4
Alice
5
101 70000
2
6
0
Expected Output:

Employee added: John
Employee added: Alice
Employee added: Bob

--- All Employees ---
ID: 101, Name: John, Salary: 50000
ID: 102, Name: Alice, Salary: 60000
ID: 103, Name: Bob, Salary: 55000

--- Search Result ---
ID: 102, Name: Alice, Salary: 60000

Salary updated for ID 101

--- All Employees ---
ID: 101, Name: John, Salary: 70000
ID: 102, Name: Alice, Salary: 60000
ID: 103, Name: Bob, Salary: 55000

Total Employees: 3

*/

#include<iostream>
#include"empn.h"
using namespace std;


int Node::setId(int d) {
	id = d;
	return 0;
}

int Node::getId()
{
	return id;
}
string Node::setName(string n)
{
	name = n;
	return 0;
}
string Node:: getName()
{
	return name;
}
int  Node::setSal(float s)
{
	salary = s;
	return salary;
}
int Node:: getSal()
{
	return salary;
}
Node* Node::getNext()
{
	return next;
}

void Node::setNext(Node* nn)
{
	next = nn;
}

