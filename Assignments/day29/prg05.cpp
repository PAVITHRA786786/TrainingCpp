/*
o/p

menu
1.AddNodeBeg
2.AddNodeEnd
3.AddNodeCert
4.FreeNodeBeg
5.FreeNodeEnd
6.FreeNodeCert
7.search
8.update
9.DisplayList
10.Exit

*/

#include<iostream>
#include<cstdlib>

using namespace std;

typedef struct node
{
	int data;
	struct node* next;
} NODE;

NODE* createNode();
NODE* addNodeBeg(NODE*, NODE*);
NODE* addNodeEnd(NODE*, NODE*);
NODE* addNodeCert(NODE*, NODE*);
NODE* freeNodeBeg(NODE*);
NODE* freeNodeEnd(NODE*);
NODE* freeNodeCert(NODE*, int);
int searchNode(NODE*, int);
NODE* updateNode(NODE*, int, int);
int dispList(NODE*);
int dispMenu();

int main()
{
	NODE* head = NULL, * nn = NULL;
	int ch = 1, value, pos;
	while (ch)
	{
		switch (dispMenu())
		{
		case 1:
			head = addNodeBeg(head, createNode());
			break;
		case 2:
			head = addNodeEnd(head, createNode());
			break;
		case 3:
			head = addNodeCert(head, createNode());
			break;
		case 4:
			head = freeNodeBeg(head);
			break;
		case 5:
			head = freeNodeEnd(head);
			break;
		case 6:
			cout << "Enter position to free node: ";
			cin >> pos;
			head = freeNodeCert(head,pos);
			break;
		case 7:
			cout << "Enter value to search: ";
			cin >> value;
			pos = searchNode(head, value);
			if (pos != -1)
				cout << "Value found at position: " << pos << endl;
			else
				cout << "Value not found." << endl;
			break;
		case 8:
			int oldValue, newValue;
			cout << "Enter old value: ";
			cin >> oldValue;
			cout << "Enter new value: ";
			cin >> newValue;
			head = updateNode(head, oldValue, newValue);
			break;
		case 9:
			dispList(head);
			break;
		case 10:
			ch = 0; 
			break;
		default:
			cout << "Invalid choice." << endl;
		}
	}
	return EXIT_SUCCESS;

}

NODE* createNode()
{
	NODE* nn = (NODE*)malloc(sizeof(NODE));
	cout << "Enter the value of node: ";
	cin >> nn->data;
	nn->next = NULL;
	return nn;
}
int dispList(NODE* head)
{
	cout << "\tList is " << endl;
	cout << "\t";
	while (head != NULL)
	{
		cout << head->data << " -> ";
		head = head->next;
	}
	cout << "NULL" << endl;
	return EXIT_SUCCESS;
}

NODE* addNodeEnd(NODE* head, NODE* nn)
{
	NODE* temp = head;
	if (head == NULL) {
		head = nn;
		return head;
	}
	while (head->next != NULL)
		head = head->next;
	head->next = nn;
	head = temp;
	return head;
}

NODE* addNodeBeg(NODE* head, NODE* nn)
{
	if (head == NULL)
	{
		head = nn;
		return head;
	}
	nn->next = head;
	head = nn;
	return head;
}

NODE* addNodeCert(NODE* head, NODE* nn)
{
	if (head == NULL)
	{
		head = nn;
		return head;
	}
	nn->next = head->next;
	head->next = nn;
	return head;
}

NODE* freeNodeBeg(NODE* head)
{
	if (head == NULL)
	{
		cout << "List is empty" << endl;
		return head;
	}
	NODE* temp = head;
	head = head->next;
	free(temp);
	return head;
}

NODE* freeNodeEnd(NODE* head)
{
	if (head == NULL)
	{
		cout << "List is empty" << endl;
		return head;
	}
	NODE* temp = head;
	if (head->next == NULL) {
		free(head);
		return NULL;
	}
	while (head->next->next != NULL)
		head = head->next;
	free(head->next);
	head->next = NULL;
	head = temp;
	return head;
}

NODE* freeNodeCert(NODE* head, int pos)
{
	if (head == NULL)
	{
		cout << "List is empty" << endl;
		return head;
	}
	if (pos == 1) {
		return freeNodeBeg(head);
	}
	pos--;
	NODE* temp = head;
	for (int i = 1; i < pos - 1 && head != NULL; i++)
	{
		head = head->next;
	}
	if (head == NULL || head->next == NULL) {
		cout << "Position out of bounds." << endl;
		return temp; 
	}
	NODE* fr = head->next; 
	head->next = head->next->next; 
	free(fr); 
	return temp; 

	
}


int searchNode(NODE* head, int value)
{
	int pos = 0;
	while (head != NULL)
	{
		if (head->data == value)
			return pos;
		head = head->next;
		pos++;
	}
	return -1; 
}

NODE* updateNode(NODE* head, int oldValue, int newValue)
{
	while (head != NULL)
	{
		if (head->data == oldValue) {
			head->data = newValue;
			return head;
		}
		head = head->next;
	}
	cout << "Node with value " << oldValue << " not found." << endl;
	return NULL;
}

int dispMenu()
{
	int ch;
	cout << "\tPress," << endl << "\t1.Add Node Begining" << endl << "\t2.Add Node End" << endl;
	cout << "\t3.Add Node CertainNode" << endl << "\t4.delete Node Begining" << endl;
	cout<< "\t5.delete Node End" << endl << "\t6.delete Node CertainNode" << endl;
	cout<<"\t7. Search Node" << endl << "\t8. Update Node" << endl;
	cout << "\t9. Display List" << endl << "\t10.Exit.." << endl << "\tChoice: " << endl;
	cin >> ch;
	return ch;
}