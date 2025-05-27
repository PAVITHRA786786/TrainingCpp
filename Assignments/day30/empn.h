#pragma once
#include<iostream>
#include<cstdlib>

using namespace std;

class Node {
private:
	int id;
	string name;
	float salary;
	Node* next;
public:
	Node(int d, string n, float s) {
		id = d;
		name = n;
		salary=s;
		next = nullptr;
	}

	int getId();
	int setId(int);
	string setName(string);
	string getName();
	int setSal(float);
	int getSal();
	Node* getNext();
	void setNext(Node*);
};