#ifndef __FLIGHT__
#define __FLIGHT__

class Flight
{
private:
	char flightNumber[20];
	int totalSeats;
	int	bookedSeats=100;
public:

	Flight (char*,int);
	int	bookSeats(int);
	void showAvailability();
	
	

};

#endif __FLIGHT__

