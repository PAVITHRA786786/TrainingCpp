#include <iostream>
using namespace std;
int factorial(int);
int fibonacci(int);

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int fibonacci(int n) {
    int a = 0, b = 1;
    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        int nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    cout << endl;
    return 0;
}
int main() {
    int choice, num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter 1 for Factorial, 2 for Fibonacci: ";
    cin >> choice;

    switch (choice) {
    default:
        cout << "Invalid choice" << endl;
        break;
    case 1:
        cout << "Factorial of " << num << " is " << factorial(num) << endl;
        break;
    case 2:
        fibonacci(num);
        break;
    
    }
    return 0;
}


