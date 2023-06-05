#include<iostream>

using namespace std;

class calculate
{
    public: float a,b,c;

        area(float a, float b)
        {
             cout<<"Area of Rectangle is :"<<a * b<<endl;
        }
         area(float a)
        {
             cout<<"Are of Circle Is : "<<3.14 * a * a<<endl ;
        }
        area(float a, float b,float c)
        {
             cout<<"Are of Triangle is : "<<a * b * c<<endl;
        }
};

int main()
{
    calculate a;
    
     a.area(5);
     
     a.area(5,4);
     
     a.area(0.5,2,4);

    
}