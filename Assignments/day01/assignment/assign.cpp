/*
Desc:Assignment operators are used to assign values to variables.
Author:
DOC/DOM:15-04-25
Version:0.1v
*/


#include<iostream>

using namespace std;

int main()
{
    int a,b;
    a=10;
    b=20;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    a += b;
    cout<<"a += b: "<<a<<endl;
    a -= b;
    cout<<"a -= b: "<<a<<endl;
    a *= 2;
    cout<<"a *= 2: "<<a<<endl;
    a /= 2;
    cout<<"a /= 2: "<<a<<endl;
    a %= 2;
    cout<<"a %= 2: "<<a<<endl;

return 0;
}