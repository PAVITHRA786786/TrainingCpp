#ifndef __LUGGAGE__
#define __LUGGAGE__
class Luggage
{
private:
	char PassengerName[20];
	int Weight;
	int Limit;
public:
	Luggage(char*, int, int);
	void checkOverweight();
};
#endif __LUGGAGE__
