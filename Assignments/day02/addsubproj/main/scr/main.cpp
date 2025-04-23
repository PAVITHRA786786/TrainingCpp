#include <iostream>
#include <main1.h>

using namespace std;


int main()
{
    int val1, val2;
    int ret = 0;
    cout << "enter the values of val1 and val2 :";
    cin >> val1 >> val2;
    ret = add(val1, val2);
    cout << "\n addition of" << val1 << " and " << val2 << " = " << ret << endl;
    ret = sub(val1, val2);
    cout << "\n subtraction of" << val1 << " and " << val2 << " = " << ret << endl;
    return 0;

}
