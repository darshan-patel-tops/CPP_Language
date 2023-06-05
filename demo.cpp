#include<iostream>

using namespace std;


class car{

public: 
	void wheels()
	{
		cout<<"Wheels"<<endl;
	}
	void seat()
	{
		cout<<"seat"<<endl;
	}
	void body()
	{
		cout<<"body"<<endl;
	}


};


class ev : public car {
	public :
		void engine()
		{
			cout<<"electric engine"<<endl;
		}
};


int main()
{
	
	ev evkaobject;
	
	evkaobject.body();	
	evkaobject.seat();	
	evkaobject.wheels();
	evkaobject.engine();	
	
	return 0;
}