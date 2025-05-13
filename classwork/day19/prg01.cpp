/*
pointers

NULL or nullptr =>(void *)0
*/

#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	char ch = 'A';
	float f = '10.5';
	int b = 30;

	
	//void* ptr=nullptr;
	//int* ptr1 = (void*)0;
	int* ptr1 = nullptr;
	
	printf("\nAddress of a=%u and it value =%d\n", &a, a);
	printf("\nAddress of ch=%u and it value =%c\n", &ch, ch);
	printf("\nAddress of f=%u and it value =%f\n", &f, f);
	printf("\nAddress of ptr=%u and it value =%u\n", &ptr1, ptr1);
	printf("\nAddress of b=%u and it value =%d\n", &b, b);
	/*
	//cout << "Address of a = " << (unsigned long int) & a << "and its value= " << a<<endl;
	//cout << "Address of ch = " << (unsigned long int) & ch << "and its value= " << ch<<endl;
	//cout << "Address of f = " << (unsigned long int) & f << "and its value= " << f<<endl;

	//cout << "Address of ptr = " <<  & ptr << "and its value= " << ptr<<endl;

	a = 10;

	ptr1 = &a;
	printf("\nAddress of ptr=%u and it value =%u\n", &ptr1, ptr1);

	printf("\nptr1 is pointing to= %u ", ptr1);
	//co(ptr1)=>&a
	//co(co(ptr))=>value of a = dereferencing the pointer
	printf("\n%u is having a value stored as =%d\n",ptr1,*ptr1);

	ptr1 = &b;
	
	printf("\n%u is having a value stored as =%d\n", ptr1, *ptr1);

	*ptr1 = 101;
	printf("\nAddress of b=%u and it value =%d\n", &b, b);

	*ptr=&ch;
	

	*/

	void* ptr = nullptr;

	ptr = &a;
	printf("\nAddress of ptr=%u and it value =%u\n", &ptr, ptr);

	printf("\nvalue stored at %u is %d\n", ptr, *(int *)ptr);

	ptr = &ch;
	printf("\nAddress of ptr=%u and it value =%u\n", &ptr, ptr);

	ptr = &f;
	printf("\nAddress of ptr=%u and it value =%u\n", &ptr, ptr);

	return 0;
}