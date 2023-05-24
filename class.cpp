#include<iostream>
#include<string>

using namespace std;

class bank
{
    public:
    string name;
    string type;
    int account;
    int balance;

    void givevalue(string name,string type,int account,int balance)
    {
        name = name;
        type = type;
        account = account;
        balance = balance;
    }
};