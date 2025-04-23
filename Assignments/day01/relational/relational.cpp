/*
Desc:Relational operators are used for the comparison of the values of the two operands.
Author:
DOC/DOM:15-04-25
Version:0.1v
*/


#include<iostream>

using namespace std;

int main()
{
    int a,b;
    a=72;
    b=99;
    bool result;
    result=(a==b);
    cout<<"15 == 25 is:"<<result<<endl;
    result=(a!=b);
    cout<<"15 != 25 is:"<<result<<endl;
    result=a>b;
    cout<<"15 != 25 is:"<<result<<endl;
    result=a<b;
    cout<<"15 != 25 is:"<<result<<endl;
    result=a>=b;
    cout<<"15 != 25 is:"<<result<<endl;
    result=a<=b;
    cout<<"15 != 25 is:"<<result<<endl;

    return 0;
}