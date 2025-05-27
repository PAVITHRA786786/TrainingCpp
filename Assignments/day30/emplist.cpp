
#include <iostream>
#include "empn.h"
#include "emplist.h"


using namespace std;


int EmpList::addEnd(int id, string name, float salary)
{
	Node* newNode = new Node(id, name, salary);
	if (head == nullptr) {
		head = newNode; 
		return 1; 
	}

	Node* temp = head;
	while (temp->getNext() != nullptr) {
		temp = temp->getNext();
	}
	temp->setNext(newNode); 
	return 1;

}

void EmpList::display()
{
	Node* temp = head;
	if (temp == nullptr) {
		cout << "List is empty." << endl;
		return;
	}
	while (temp != nullptr) {
		cout << "ID: " << temp->getId() << ", Name: " << temp->getName() << ", Salary: " << temp->getSal() << endl;
		temp = temp->getNext();
	}
}

bool EmpList::delNode(int id)
{
	Node* temp = head;
	Node* prev = nullptr;

	while (temp != nullptr) {
		if (temp->getId() == id) {
			if (prev == nullptr) { 
				head = temp->getNext();
			} else {
				prev->setNext(temp->getNext());
			}
			delete temp; 
			cout << "Employee ID " << id << " deleted" << endl;
			return true; 
		}
		prev = temp;
		temp = temp->getNext();
	}

	cout << "Employee ID " << id << " not found." << endl;
	return false;
}

Node* EmpList::search(string name)
{
	Node* temp = head;
	while (temp != nullptr) {
		if (temp->getName() == name) {
			cout << "Employee ID: " << temp->getId() << ", Name: " << temp->getName() << ", Salary: " << temp->getSal() << endl;
			return temp; 
		}
		temp = temp->getNext();
	}
	cout << "Employee " << name << " not found" << endl;
	return nullptr;

}
Node* EmpList::update(int id,float sal)
{
	Node* temp = head;
	while (temp != nullptr) {
		if (temp->getId() == id) {
			temp->setSal(sal);
			cout << "Salary updated for ID: " << id << endl;
			return temp; 
		}
		temp = temp->getNext();
		
	}
	cout << "Employee ID " << id << " not found" << endl;

	return nullptr;
	
}

int EmpList:: count(int count)
{
	Node* temp = head;
	 count = 0;
	while (temp != nullptr) {
		count++;
		temp = temp->getNext();
	}
	cout << "Total employees: " << count << endl;
	return count;
}