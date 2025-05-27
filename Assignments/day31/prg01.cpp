/*
Problem 1: Academic Result Management
Concepts: Class, Single Inheritance, Constructor, Method Overloading

Problem Statement: Create a class Student with data members rollNo, name, and age. Create a derived class Marks that inherits from Student and contains marks of three subjects. Use constructor initialization for all attributes. Implement a method calculate() to compute total and average marks. Overload the display() function to:

Display only student data (rollNo, name, age)
Display full result (including total and average)
Input:

Enter Roll No: 101
Enter Name: Alice
Enter Age: 20
Enter Marks: 89 76 91
Expected Output:

Student Info:
Roll No: 101
Name: Alice
Age: 20

Full Result:
Total Marks: 256
Average Marks: 85.33
*/



#include<iostream>
#include<cstring>

using namespace std;

class Student 
{
private:
	int rollNo;
	string name;
	int age;
public:
	Student(int r, string n, int a) : rollNo(r), name(n), age(a) {}

	void display() const {
		cout << "Student Info:" << endl;
		cout << "Roll No: " << rollNo << endl;
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
	}
};

class Marks : public Student
{
private:
	int marks[3];
	int total;
	float avg;
public:
    Marks(int r, string n, int a, int m1, int m2, int m3) 
		: Student(r, n, a) {
		marks[0] = m1;
		marks[1] = m2;
		marks[2] = m3;
	}

	void calculate() {
		total = marks[0] + marks[1] + marks[2];
		avg = total / 3.0;
	}

	void display(int n) const {
		if (n == 1) {
			display(0);
			cout << endl;
			cout << "Full Result:" << endl;
			cout << "Total Marks: " << total << endl;
			cout << "Average Marks: " << avg << endl;
		}
	}
};

int main() {
	int rollNo, age, m1, m2, m3;
	string name;

	cout << "Enter Roll No: ";
	cin >> rollNo;
	cout << "Enter Name: ";
	cin >> name;
	cout << "Enter Age: ";
	cin >> age;
	cout << "Enter Marks: ";
	cin >> m1 >> m2 >> m3;

	Marks m(rollNo, name, age, m1, m2, m3);
	m.calculate();
	m.display(1);

	return 0;
}