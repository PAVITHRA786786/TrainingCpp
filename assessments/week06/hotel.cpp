#include<iostream>
#include<cstring>
#include"hotel.h"

using namespace std;

HotelRoom::HotelRoom(int r,char* t) {
	roomNumber = r;
	strcpy(Type, t);
	
}

void HotelRoom::bookRoom() {

	IsBooked = true;
	if (IsBooked == true) {
		
		cout << "Room " << roomNumber << Type << "is now booked." << endl;
	
	 }
	else if (IsBooked == false) {
	cout << "Room already booked." << endl;
	}

}
void HotelRoom::showStatus() {
	cout << "Room already booked." << endl;
}