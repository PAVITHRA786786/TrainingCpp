
#ifndef __MOVIE__
#define __MOVIE__

class movie {
private:
	char title[20], genre[20];
	int rating;

public:
	void setTitle(char*);
	char* getTitle();
	void setGenre(char*);
	char* getGenre();
	void setRate(int);
	int getRate();
	void display();


};
#endif __MOVIE__
