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
	void display();
public:
        void deposite(float);
	void withdraw(float);


};

#endif __ATM__
