#include<iostream>
using namespace std;

class Calculator 
{
    public:

        float number1, number2;

        void add() 
        {
            cout << number1 + number2 << endl;
        }
        void subtract() 
        {
            cout << number1 - number2 << endl;
        }
        void multiply() 
        {
            cout << number1 * number2 << endl;
        }
        void divide() 
        {
            cout << number1 / number2 << endl;
        }
};

int main() 
{
    Calculator calculator;

    int choice;

    cout << "Enter two numbers: "<<endl;
    cin >> calculator.number1 >> calculator.number2;

    // cout << "Enter your choice: \n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    // cin >> choice;

            calculator.add();
            calculator.subtract();
            calculator.multiply();
            calculator.divide();

    // switch (choice) 
    // {
    //     case 1:
    //         calculator.add();
    //         break;
    //     case 2:
    //         calculator.subtract();
    //         break;
    //     case 3:
    //         calculator.multiply();
    //         break;
    //     case 4:
    //         calculator.divide();
    //         break;
    //     default:
    //         cout << "Invalid choice\n";
    //         break;
    // }

    return 0;
}