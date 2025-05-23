/*
1. Flight Seat Reservation System
Objective:
Create a class to manage flight seat reservations. Each flight has a seat count and a record of bookings.
Class:
Flight
Attributes:
Flight Number
Total Seats
Booked Seats
Methods:
Constructor
bookSeats(int)
showAvailability()
Test Case 1:
Flight f1("AI203", 100);
f1.bookSeats(30);
f1.showAvailability();
Expected Output:
Flight: AI203 | Seats Available: 70
Test Case 2:
f1.bookSeats(80);
Expected Output:
Booking Failed: Not enough seats.
*/

#include<iostream>
#include<cstring>
#include"flight.h"

using namespace std;

int main()
{
	char flightNumber[20]="AI203";
    int cap = 100;
	Flight f1(flightNumber, cap);
	f1.bookSeats(30);
	f1.showAvailability();

	return 0;
}
