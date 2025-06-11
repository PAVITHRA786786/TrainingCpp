#include<iostream>
#include<thread>
#include<mutex>

using namespace std;

typedef unsigned long long ULL;

int amt = 0;
std::mutex m;

void addfun(int n)
{
	ULL start = 0, end = 1900000000;
	m.lock();
	cout << " amt Add = " << amt << endl;
	amt += n;
	//for(int i=start;i<end;i++){}
	m.unlock();
	
}
void subfun(int n)
{
	m.lock();
	cout << " amt Sub =" << amt << endl;
	amt -= n;
	m.unlock();

}
int main()
{
	thread t1(addfun, 150);
	thread t2(subfun, 100);

	t2.join();
	cout << " Amount = " << amt << endl;
	t1.join();
	cout << " Amount = " << amt << endl;

	return 0;
}