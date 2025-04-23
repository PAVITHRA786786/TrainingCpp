/*
Desc:The decrement function will be done before the evaluation of the expression.
Author:
DOC/DOM:15-04-25
Version:0.1v
*/


#include<iostream>

using namespace std;

int main()
{
    int x = 9;
    cout<<"the value before using pre decrement operator is :"<<x<<endl;
    int temp = --x;
    cout<<"the value stored by temp is: "<<temp<<endl;
    cout<<"the value after using pre decrement operator is : "<<x<<endl;
    return 0;
}