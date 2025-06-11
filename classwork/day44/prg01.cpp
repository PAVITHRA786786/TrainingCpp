#include<iostream>
#include<thread>
#include<chrono>

using namespace std;

typedef unsigned long long ULL;


void greet() { cout << "Hello World!" << endl; }

void display(int x) { cout << "X: " << x << endl; }

void modifyX(int& x) { x *= 2;
std::this_thread::sleep_for(std::chrono::seconds(5));
}

void printX(ULL x,ULL y) {
	ULL i;
	for (i = x;i < y;i++)
		cout << "i=" << i << endl;
	//cout << "x,y: " << x << "\t" << y << endl;
}

int main()
{
	/*
	int val = 10;

	thread t1(greet);
	//t1.join();//joinable or not to check here
	cout << "End of the program" << endl;
	t1.join();

	thread t2(display,101);//call by value
	t2.join();

	thread t3(modifyX, ref(val));//call by reference

	cout << "val: " << val << endl;
	t3.join();
	cout << "val: " << val << endl;*/

	//ULL x = 999999;
	/*ULL x = 1000;
	ULL y = 999999999;
	ULL a = 10;
	ULL b = 999999;
	thread t1(printX, x,y);
	thread t2(printX, a,b);

	t1.join();
	t2.join();*/

	int val = 10;
	thread t1(modifyX,ref(val));
	t1.join();
	//t1.detach();
	std::cout << "Main is not blocked.\n";
	std::this_thread::sleep_for(std::chrono::seconds(20)); // Wait to see output
	cout << "value: " << val << endl;

	return 0;
}












