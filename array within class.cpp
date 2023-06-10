#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	public:
		int id,i;
		char name[20];
		int marks[5];  // Array within class
		
	void input()
	{
		cout<<"Enter id:"<<endl;
		cin>>id;
		fflush(stdin);
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
	Student s1[3];
	for(int i=0;i<3;i++)
	{
		s1[i].input();
	}
	for(int i=0;i<3;i++)
	{
		s1[i].display();
	}
}