#include<iostream>
#include<cstring>
#include"flight.h"

using namespace std;

Flight::Flight(char *f, int c){ 
	strcpy(flightNumber, f);
	totalSeats = c;
	bookedSeats = 0;
	

}

int Flight::bookSeats(int seats) {
	totalSeats = 100;
	if (seats > totalSeats) {
		cout << "Booking Failed: Not enough seats." << endl;
		return 0;
	}
	else {
		bookedSeats += seats;
		totalSeats -= seats;
		return 1;
	}
}
void Flight::showAvailability() {
		cout << "Flight: " << flightNumber << " | Seats Available: " << totalSeats << endl;
		cout << "Booking Failed: Not enough seats." << endl;
		
}
