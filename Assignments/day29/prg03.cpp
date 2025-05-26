#include<iostream>

using namespace std;

struct node {
	int v;
	struct node* ptr;

};

int main()
{
	//Step 1: allocating memory for different nodes
	struct node n1, n2, n3;
	cout << sizeof(n1) << "\tAddress of n1: " << (unsigned long int) & n1 << endl;
	cout << sizeof(n2) << "\tAddress of n2: " << (unsigned long int) & n2 << endl;
	cout << sizeof(n3) << "\tAddress of n3: " << (unsigned long int) & n3 << endl;

	//Step 2: initialize value to all nodes
	n1.v = 10;
	n1.ptr = NULL;

	n2.v = 20;
	n2.ptr = NULL;

	n3.v = 30;
	n3.ptr = NULL;

	

	cout << "n1 values: " << n1.v << "\tptr: " << (unsigned long int) n1.ptr << endl;
	cout << "n2 values: " << n2.v << "\tptr: " << (unsigned long int) n2.ptr << endl;
	cout << "n3 values: " << n3.v << "\tptr: " << (unsigned long int) n3.ptr << endl;

	//Step 3: make a relationship
	n1.ptr = &n2;
	n2.ptr = &n3;

	cout << "After making the relationship" << endl;
	cout << "n1 values: " << n1.v << "\tptr: " << (unsigned long int) n1.ptr << endl;
	cout << "n2 values: " << n2.v << "\tptr: " << (unsigned long int) n2.ptr << endl;
	cout << "n3 values: " << n3.v << "\tptr: " << (unsigned long int) n3.ptr << endl;
	
	//Step 4: traversing in the list
	struct node *head = &n1;//n1=>BA of the list

	while (head!=NULL)
	{
		cout << head->v <<"->";
		head = head->ptr;
	}
	cout << "NULL" << endl;

	struct node n4;
	n4.v = 40;
	n4.ptr = NULL;	

	//add node btw 2 nodes
	n1.ptr = &n4;
	n4.ptr = &n2;

	head = &n1;
	while (head != NULL)
	{
		cout << head->v << "->";
		head = head->ptr;
	}
	cout << "NULL" << endl;

	struct node n5, n6;
	n5.v = 50;
	n5.ptr = NULL;
	n6.v = 60;
	n6.ptr = NULL;
	n3.ptr = &n6;
	n5.ptr = &n1;
	head = &n5;
	while (head != NULL)
	{
		cout << head->v << "->";
		head = head->ptr;
	}
	cout << "NULL" << endl;


	//remove 50 and 60
	n3.ptr = NULL;
	head = &n1;
	while (head != NULL)
	{
		cout << head->v << "->";
		head = head->ptr;
	}
	cout << "NULL" << endl;
	
	//remove 20
	n4.ptr = &n3;
	head = &n1;
	while (head != NULL)
	{
		cout << head->v << "->";
		head = head->ptr;
	}
	cout << "NULL" << endl;
	
	/*
	cout << n1.v << endl;//10
	cout << head->v << endl;
	cout << "Address of haed->ptr: " << (unsigned long int)head->ptr << endl;

	//head = &n2;
	head = head->ptr;
	cout << n2.v << endl;//20
	cout << head->v << endl;

	//head = &n3;
	head = head->ptr;
	cout << n3.v << endl;//30
	cout << head->v << endl;*/



	return 0;
}















