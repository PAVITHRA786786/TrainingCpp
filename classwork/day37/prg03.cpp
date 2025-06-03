#include<iostream>

using namespace std;

template<typename T,size_t N>
class myArray
{
	T* arr;
	size_t size;
public:
	myArray()
	{
		this->arr = new T[N];
		cout << N << endl;
	}

};


int main()
{
	myArray<int, 10>arr;
	
	return 0;
}