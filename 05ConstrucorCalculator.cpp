#include<iostream>
using namespace std;

class Calculator {
    int num1, num2;
    
    public:
    
    void addition() {
        cout << "Addition Result = " << num1 + num2 << endl;
    }
    void substraction() {
        cout << "Subtraction Result = " << num1 - num2 << endl;
    }
    void multiplication() {
        cout << "Multiplication Result = " << num1 * num2 << endl;
    }
    void division() {
        if (num2 == 0) {
            cout << "Division Result: Undefined" << endl;
        }
        else {
            cout << "Division Result = " << (float)num1 / num2 << endl;
        }
    }
    Calculator(int n1, int n2) 
    {
        
    cout << "Enter Two Numbers: "<<endl;
    cin >> num1 >> num2;

         addition();
         substraction();
         multiplication();
         division();

    }
};

int main() {
    int num1, num2;

    Calculator calculator(num1, num2);

    return 0;
}