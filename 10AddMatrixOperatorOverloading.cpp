#include <iostream>

using namespace std;

class Matrix 
{
   public:

      int arr[10];

      Matrix operator +(Matrix m2) 
      {
         Matrix temp;

         for(int i = 0; i < 10; i++) 
         {
            temp.arr[i] = arr[i] + m2.arr[i];
         }

         return temp;
      }
};

int main() 
{
   Matrix m1, m2, m3;

   cout << "Enter 10 elements of first matrix: "<<endl;

   for(int i = 0; i < 10; i++) 
    {
      cin >> m1.arr[i];
    }

   cout << "Enter 10 elements of second matrix: "<<endl;

   for(int i = 0; i < 10; i++) 
    {
      cin >> m2.arr[i];
    }

   m3 = m1 + m2;

   cout << "Result is: "<<endl;

   for(int i = 0; i < 10; i++) 
    {
      cout << m3.arr[i] << " ";
    }

   cout << endl;

   return 0;

}