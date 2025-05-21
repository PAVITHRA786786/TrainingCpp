#include <iostream>
#include <cstring>
#include "student1.h"

using namespace std;

void student1::setName(const char* s)
{
	strcpy(name, s);
}
char* student1::getName() {
	return name;
}

void student1::setRollno(int r) {
	rollno = r;
}
int student1::getRollno() {
	return rollno;
}
void student1::setMarks(float m[])
{
	for (int i = 0;i < 4;i++)
		marks[i] = m[i];
}

void student1::display()
{

	cout << "Name: " << name << endl;
	cout << "Roll No: " << rollno << endl;
	cout << "M1" << "\t" << "M2" << "\t" << "M3" << "\t" << "M4" << "\t"<< endl;
	for (int i = 0;i < 4;i++) {
		cout << marks[i] << "\t";
	}
	cout << endl;
	cout << "Avg: " << calcAvg();

	cout << endl;
}

float student1::calcAvg() {
	float avg = 0.0;
	for (int i = 0;i < 4;i++) {
		//cout << marks[i] << "\t";
		avg += marks[i];
	}
	return avg / 4.0;
}
float student1::grade()
{
	return calcAvg();
}

	
	