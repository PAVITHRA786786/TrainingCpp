/*
Desc:Conditional operator allows to evaluate a condition and return one value if the condition is true and 
another value if the condition is false.
Author:
DOC/DOM:15-04-25
Version:0.1v
*/


#include<iostream>

using namespace std;

int main()
{
int a=25,b=45;
int d=(a>b)?405:505;
cout<<d<<endl;
int x=10,y=15,z=20;
int c=(x>y)?((x>z)?x:z):((y>z)?y:z);
cout<<c<<endl;
return 0;
}