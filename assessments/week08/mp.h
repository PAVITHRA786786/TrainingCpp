#pragma once

#include<iostream>
#include<vector>
#include "log.h"

using namespace std;

template<typename T>
class Register
{
protected:
	T reg;
	
public:
	Register(T reg):reg(reg){}
	vector < string < T * >> reg;
	reg.push_back("AX");
	reg.push_back("BX");
	reg.push_back("CX");
	reg.push_back("DX");

	~Register(){}

};
class Memory
{
protected:
	int addr;
public:
	Memory(int addr):addr(addr){}
	void setadd(int addr)
	{
		this->addr = addr;
	}
	int getadd()
	{
		return addr;
	}
	~Memory(){}
};

template<typename T>
class Microprocessor: public Memory
{
protected:
	Register::Register<T> reg;
	Memory<T> mem;
	vector<int, int>;
	int reg1, reg2, val;
public:
	Microprocessor(T reg):Register::reg(reg){}
	Microprocessor(T reg,int val,int addr):Register::reg(reg),
	Memory(addr),val(val){}
	int MAX =INT_MAX(65536);
	
	if (reg > MAX)
	{
		cout << "overflow"<<endl;
	else
		continue;
	}
	bool operator[(const Microprocessor & other)
	{
		return reg [ Microprocessor.other;
	}
	bool operator](const Microprocessor & other)
	{
		return reg ] Microprocessor.other;
	}

	virtual int ADD(string &reg1,string &reg2)
	{
		return (*reg1) += (*reg2);
	}
	int ADD(string &reg1,int val) override
	{
		return (*reg1) += (val);
	}

	int SUB(string &reg1,string &reg)
	{
		return (*reg1) -= (*reg2);
	}
	virtual int MUL(string &reg1,int val)
	{
		return (*reg1) *= (val);
	}
	int MUL(string &reg1,int &reg2)override
	{
		return (*reg1) *= (*reg2);
	}
	int DIV(string &reg1,int val)
	{
		return (*reg1) /= (val);
	}
	virtual void MOV(string &reg,int val )
	{
		*reg = val;
	}
	void MOV(string &reg1,string &reg2) override
	{
		*reg1 = *reg2;
	}
	void MOV(string &reg1,int &addr) override
	{
		*reg1 = *addr;
	}
	void MOV(string &addr,int val) override
	{
		*addr = val;
	}
	void HLT()
	{
		exit(0);
	}
	

	~Microprocessor(){}
};

class Mp
{
public:
	void display() const
	{
		int AX = 50, BX = 30, CX = 0, DX = 0;

		static int programCounter = 00;
		programCounter++;

		cout << "Recevied Interrupt " << endl;
		cout << "snapshot of the processor " << endl;
		cout << "AX: " << AX << endl;
		cout << "BX: " << BX << endl;
		cout << "CX: " << CX << endl;
		cout << "DX: " << DX << endl;
		cout << "First 16 Memory Contents " << endl;
		AX = 12, CX = 18, BX = 4, DX = 5;
		for (int i = 1;i < 16;i++, programCounter++) {
			cout << programCounter << "->" << "//Any trash value" << endl;
			if (programCounter == 3)
				cout << programCounter << "->" << AX << endl;
			if (programCounter == 5)
				cout << programCounter << "->" << CX << endl;
			if (programCounter == 7)
				cout << programCounter << "->" << BX << endl;
			if (programCounter == 9)
				cout << programCounter << "->" << DX << endl;
			AX = 30, BX = 50;
			if (programCounter == 11)
				cout << programCounter << "->" << AX << endl;
			if (programCounter == 13)
				cout << programCounter << "->" << BX << endl;
		}
	}
	~Mp(){}
};



















