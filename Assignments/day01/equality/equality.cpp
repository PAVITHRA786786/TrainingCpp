/*
Desc:The equal-to operator returns true if both operands have the same value,otherwise false.
      The not-equal-to operator returns true if the operands don't have the same value,otherwise false.
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
    cout<<"72 == 99 is:"<<result<<endl;
    result=(a!=b);
    cout<<"72 !=99 is:"<<result<<endl;
    return 0;
}
