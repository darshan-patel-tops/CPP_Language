#include <iostream>

using namespace std;

class maths
{
    public :
            
        add(int a, int b) 
        {
        return a + b;
        }

        add(float a, float b) 
        {
        return a + b;
        }

        subtract(int a, int b) 
        {
        return a - b;
        }

        subtract(float a, float b) 
        {
        return a - b;
        }

        multiply(int a, int b) 
        {
        return a * b;
        }

        multiply(float a, float b) 
        {
        return a * b;
        }

        divide(int a, int b) 
        {
        return a / b;
        }

        divide(float a, float b) 
        {
        return a / b;
        }

};

int main() 
{
 
  int a = 10, b = 5;
  float c = 2.5, d = 1.5;

    maths m;

  cout << "Addition of " << a << " and " << b << " is " << m.add(a, b) << endl;
  cout << "Addition of " << c << " and " << d << " is " << m.add(c, d) << endl;

  cout << "Subtraction of " << a << " and " << b << " is " << m.subtract(a, b) << endl;
  cout << "Subtraction of " << c << " and " << d << " is " << m.subtract(c, d) << endl;

  cout << "Multiplication of " << a << " and " << b << " is " << m.multiply(a, b) << endl;
  cout << "Multiplication of " << c << " and " << d << " is " << m.multiply(c, d) << endl;

  cout << "Division of " << a << " and " << b << " is " << m.divide(a, b) << endl;
  cout << "Division of " << c << " and " << d << " is " << m.divide(c, d) << endl;

  return 0;
}