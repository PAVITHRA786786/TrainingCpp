
#include <iostream>
#include <cstring>
using namespace std;

int add(int, int);
int add(int, float, float);


int add(int v1, int v2 = 100)
{
    return v1 + v2;
}

int add(int v1, float v2, float v3 = 1.1)
{
    return v1 + v2 + v3;
}

int main()
{
    char s1[100] = "bhima";
    char s2[] = "shankar";
    cout << add(10, 11) << endl;
    cout << add(11, 12.1, 13.1) << endl;
    return 0;
}