#ifndef __HOTEL__
#define __HOTEL__

class HotelRoom
{
private:
	int roomNumber;
	char Type[10];
	bool IsBooked;
	
public:
	HotelRoom(int r, char* t); 
	void bookRoom();
	void showStatus();
};

#endif __HOTEL__
