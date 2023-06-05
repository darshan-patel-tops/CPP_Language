#include<iostream>
#include<string>
using namespace std;

class person
{
    public :
    string name;
    int age;

    person()
    {
       cout<<"Enter Your Name:"<<endl;
       // cin>>name;
       getline(cin,name);

       cout<<"Enter Your Age:"<<endl;
       cin>>age;

    }

};

class student : public person
{

    public :
    
    float percentage,marks,achievedmarks;

    student()
    {
        cout<<"Enter Total Marks"<<endl;
        cin>>marks;

        cout<<"Enter Achieved marks "<<endl;
        cin>>achievedmarks;

            percentage = (achievedmarks / marks) * 100; 
        cout<<"Total Percentage Are:"<<percentage <<endl;

    }
};

class teacher : public student
{
    public :
    int salary;
    teacher()
    {
       cout<<"Enter You Salary"<<endl;
       cin>>salary;

       cout<<"Your Salary Is:"<<salary;
    }
};

int main()
{
    teacher t;


}