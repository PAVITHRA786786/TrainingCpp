/*
Desc: sizeof is used to return the size of the operand,in bytes.
Author:
DOC/DOM:15-04-25
Version:0.1v
*/


#include<iostream>

using namespace std;

int main()
{

int a=10;a++;
double b=5;
cout<<"the value of a is:"<<a<<endl;
cout<<"the value of a++ is:"<<a++<<endl;
cout<<"Size of a++ is: "<<sizeof(++a)<<endl;
cout<<"Size of a is: "<<sizeof(a)<<endl;
cout<<"Size of b is: "<<sizeof(b)<<endl;
return 0;
}