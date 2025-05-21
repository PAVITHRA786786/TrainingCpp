
#ifndef __STUDENT1__
#define __STUDENT1__

class student1
{
private:
	int rollno;
	char name[20];
	float marks[4];

public:
	void setName(const char*);
	char* getName();
	void setRollno(int);
	int getRollno();
	void setMarks(float[]);
	void display();
	float grade();

private:
	float calcAvg();
};
#endif __STUDENT1__
