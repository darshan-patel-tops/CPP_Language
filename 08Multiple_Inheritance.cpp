#include<iostream>

using namespace std;

class student
{
    public :
        int roll_no;
        string name;
    student()
    {
        cout<<"Enter Roll Number:"<<endl;
        cin>>roll_no;
        cout<<"Enter Name:"<<endl;
        cin>>name;
        // getline(cin, name);

    }
};

class test
{
    public :
        int marks1,marks2;

    test()
    {
        cout<<"Enter Marks in Sports:"<<endl;
        cin>>marks1;

        cout<<"Enter Marks in English:"<<endl;
        cin>>marks2;
    }

};

class result : public student,test
{
    public :
        int total;

        result()
        {
            cout<<"Roll No:"<<roll_no<<endl;
            cout<<"Congratulation "<<name<<endl;
            total = marks1 + marks2;
            cout<<"Your Total Marks In Main Subject are :"<<total<<endl;
        }

};

int main()
{

    result result;

    return 0;
}