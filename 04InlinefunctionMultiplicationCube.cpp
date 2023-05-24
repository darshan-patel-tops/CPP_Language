#include <iostream>
using namespace std;

inline int multiply(int a, int b) 
{
    return a * b;
}

inline int cube(int a) 
{
    return a * a * a;
}

int main() 
{
    int num1, num2, mul, cubic;

    cout << "Enter two numbers: "<< endl;
    cin >> num1 >> num2;

    mul = multiply(num1, num2);
    cout << "Multiplication value: " << mul << endl;

    cout << "Enter a number to find its cubic value: ";
    cin >> num1;

    cubic = cube(num1);
    cout << "Cubic value: " << cubic << endl;

    return 0;
}