/*
Q3.Student Gradebook
Problem:
Create a class Student with marks in 3 subjects. Add a function calculateAverage() and getGrade() that returns 'A', 'B', or 'C'
based on the average. Display details using another function.

*/

#include <iostream>
#include "student1.h"

using namespace std;


int main()
{
	student1 S1;
	float marks[] = { 55,56,57,58 };
	S1.setName("bhima");
	S1.setRollno(101);
	S1.setMarks(marks);
	S1.display();
	float grade = S1.grade();

	if ((grade >= 85) && (grade <= 100))
	{
		cout << "Grade A" << endl;
	}
	else if ((grade >= 65) && (grade < 85))
	{
		cout << "Grade B" << endl;
	}
	else if ((grade >= 35) && (grade < 65))
	{
		cout << "Grade C" << endl;
	}
	else
	{
		cout << "Failed" << endl;
	}




	return 0;
}