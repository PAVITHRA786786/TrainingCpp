/*
Desc:Logical operators are used to check whether an expression is true or false.
Author:
DOC/DOM:15-04-25
Version:0.1v
*/


#include<iostream>

using namespace std;

int main()
{
    int a,b;
    a=5;
    b=9;
    bool result;
    result=(a!=b) && (a<b);
    cout<<"(a!=b) && (a<b) is:"<<result<<endl;
    result=(a==b) && (a<b);
    cout<<"(a==b) && (a<b) is:"<<result<<endl;
    result=(a==b) && (a>b);
    cout<<"(a==b) && (a>b) is:"<<result<<endl;
    result=(a!=b) || (a<b);
    cout<<"(a!=b) || (a<b) is:"<<result<<endl;
    result=(a==b) || (a<b);
    cout<<"(a==b) || (a<b) is:"<<result<<endl;
    result=(a==b) || (a>b);
    cout<<"(a==b) || (a>b) is:"<<result<<endl;
    result=!(a==b) ;
    cout<<"!(a==b) is:"<<result<<endl;
    result=!(a==5) ;
    cout<<"!(a==5) is:"<<result<<endl;

    return 0;
}