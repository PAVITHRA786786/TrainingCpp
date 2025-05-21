/*
Q2.Movie Rating System
Problem:
Create a class Movie with members: title, genre, rating (out of 10).
Write functions to accept movie details and another function to print "Hit", "Average", or "Flop" based on the rating.
*/


#include<iostream>
#include<cstring>
#include"movie.h"

using namespace std;

int main()
{
	movie m;
	char tit[] = "bholashankar";
	char gen[] = "family oriented";
	int rate = 9;
	m.setTitle(tit);
	m.setGenre(gen);
	m.setRate(rate);

	m.display();
	m.getRate();

	if ((rate >= 7) && (rate <= 10))
	{
		cout << "Hit" << endl;
	}
	else
	if ((rate >= 4) && (rate < 7))
	{
		cout << "Average" << endl;
	}
	else
	if ((rate >= 3) && (rate <= 0))
	{
	    cout << "flop" << endl;
	}
	else
		cout << "invalid input" << endl;
	return 0;
}