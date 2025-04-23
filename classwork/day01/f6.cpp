#include<iostream>

using namespace std;

int main()
{
int x=10,y=15,z=20;
int c=(x>y)?((x>z)?x:z):((y>z)?y:z);
cout<<c<<endl;
return 0;
}