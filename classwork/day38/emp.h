#pragma once
#pragma once
#include<iostream>

using namespace std;

class Employee
{
	int id;
	string name;
public:
	Employee(int id, string name) :id(id), name(name) {}
	int getId() { return id; }
	void setId(int id) { this->id; }
	void setName(string name) { this->name; }
	string getName() { return name; }
	void display() { cout << "ID: " << id << " | Name: " << name << endl; }

	bool operator==(const Employee& other)const {
		return id == other.id;
	}
};