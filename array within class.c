#include<iostream>
using namespace std;
class Student
{
	public:
		int id,i;
		string name;
		int marks[5];  // Array within class
		
	void input()
	{
		cout<<"Enter id:"<<endl;
		cin>>id
		cout<<"Enter name:"<<endl;
		gets(name);
		for(i=0;i<5;i++)
		{
			cout<<"Enter marks:"<<endl;
			cin>>marks[i];
		}	
	}	
	void display()
	{
		cout<<"\n id = "<<id;
		cout<<"\n name= "<<name;
		for(i=0;i<5;i++)
		{
			cout<<"\n marks = "<<marks[i];
		}
	}
};

main()
{
	Student s1;
	s1.input();
	s1.display();
}