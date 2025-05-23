/*
2. Hotel Room Booking Manager
Objective: Manage bookings for rooms in a hotel.
Class:
HotelRoom
Attributes:
Room Number
Type (AC/Non-AC)
IsBooked (boolean)
Methods:
Constructor
bookRoom()
showStatus()
Test Case 1:
HotelRoom h1(201, "AC");
h1.bookRoom();
h1.showStatus();
Expected Output:
Room 201 (AC) is now booked.
h1.bookRoom();
Expected Output:
Room already booked.
*/

#include<iostream>
#include<cstring>
#include"hotel.h"

using namespace std;

int main()
{
	int r = 201;
	char a[10]= "AC";
	HotelRoom h1(r,a);
	h1.bookRoom();
	h1.showStatus();

	return 0;
}