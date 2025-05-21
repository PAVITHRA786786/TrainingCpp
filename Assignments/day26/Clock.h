#ifndef __CLOCK__
#define __CLOCK__

class Clock
{
private:
	int hours;
	int minutes;
	int seconds;

public:
	void setHours(int);
	int getHours();
	void setMin(int);
	int getMin();
	void setSec(int);
	int getSec();
	void display();
public:
	void tick();
	
};

#endif __CLOCK__
