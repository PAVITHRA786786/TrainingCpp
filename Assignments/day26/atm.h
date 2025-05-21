#ifndef __ATM__
#define __ATM__

class atm {
private:
	float balance;
	char accHolder[20];
public:
	void setAccHolder(const char*);
	char* getAccHolder();
	void setBal(float);
	float getBal();
	void deposite(float);
	void withdraw(float);
	void display();


};

#endif __ATM__
