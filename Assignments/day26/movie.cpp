#include<iostream>
#include<cstring>
#include"movie.h"

using namespace std;

void movie::setTitle(char* t) {
	strcpy(title, t);
}
char* movie::getTitle() {
	return title;
}
void movie::setGenre(char* g) {
	strcpy(genre, g);
}
char* movie::getGenre() {
	return genre;
}
void movie::setRate(int r) {
	rating = r;
}
int movie::getRate() {
	return rating;
}
void movie::display() {
	cout << "Movie Title: " << title << endl;
	cout << "Movie Genre: " << genre << endl;
	cout << "Movie Rating: " << rating << endl;
}

