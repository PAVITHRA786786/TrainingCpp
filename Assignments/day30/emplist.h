
#pragma once
#include "empn.h"


class EmpList {
private:
	Node* head;
public:
	EmpList() {

		head = nullptr;
	}

	int addEnd(int,string,float);
	bool delNode(int);
	Node* search(string);
	Node* update(int, float);
	int count(int);
	void display();
};
