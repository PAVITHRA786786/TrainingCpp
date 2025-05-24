/*
create a class for stack operation
*/

#include<iostream>
#define MAX 5

using namespace std;

class Stack
{
private:
	int top = -1;
	int bottom = -1;
	int arr[MAX];//instead of stack arr use dy.arr
	
public:
	Stack();
	bool push(int);
	bool pop();
	void display() const;


};
Stack::Stack() {
	top = -1;
    bottom = -1;
}
bool Stack::push(int v)
{
	if (top == MAX - 1)
	{
		cout << "Stack is full" << endl;
		return 0;
	}
	top++;
	arr[top] = v;

	return 0;
	
}
bool Stack:: pop()
{
	if (top == bottom)
	{
		cout << "Stack is empty" << endl;
		return 0;
	}
	cout << arr[top] << " got popped out" << endl;
	top--;
	return 0;

}

void Stack::display() const
{
	if (top == bottom)
	{
		cout << "Stack is empty" << endl;
		return;
	}
	cout << "====Stack Elements are===" << endl;
	for (int i = top;i >= 0;i--)
		cout << arr[i] << endl;

	cout << endl;
}


int main()
{
	Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.push(60);
	s.display();


	s.pop();
	s.pop();
	s.display();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	return 0;
}