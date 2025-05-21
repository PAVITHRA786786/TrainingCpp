/*
Q1.Digital Clock Simulation
Problem:
Create a class DigitalClock with members hour, minute, and second.
Add a function tick() that increments the time by one second and handles overflow.


*/


#include<iostream>
#include<cstring>
#include"Clock.h"
using namespace std;

int main()
{
    
	Clock c;
	int h=1,
    m=60,s=60;

	c.setHours(h);
	c.setMin(m);
	c.setSec(s);
	c.display();
	c.tick();
	c.display();
	c.tick();
	c.display();
	
	return 0;

}