#include<iostream>
#include<string>

using namespace std;

class bank
{
    public:
    string name;
    string type;
    int account;
    int withdrawamount;
    float balance;

    void givevalue()
    {
        cout << "Enter name of depositor: ";
    getline(cin, name);
    // cin>>name;

    cout << "Enter account number: ";
    cin >> account;

    cout << "Enter type of account: ";
    cin >> type;

    cout << "Enter balance amount: ";
    cin >> balance;


        name = name;
        type = type;
        account = account;
        balance = balance;
    }

    void deposit()
    {
        cout << "Enter amount to deposit: ";
    cin >> balance;
        balance += balance;


    }

    void withdraw()
    {
         cout << "Enter amount to withdraw: ";
    cin >> withdrawamount;

        if (balance >= withdrawamount) 
    {
        balance -= withdrawamount;
        cout << "Amount withdrawn successfully.\n";
    } else 
    {
        cout << "Insufficient balance. Withdrawal failed.\n";
    }
    }
    void display()
    {
    cout << "Name of the depositor: " << name << endl;
    cout << "Balance amount in the account: " << balance << endl;
    }

    bank()
    {
        givevalue();
        deposit();
        withdraw();
        display();

    }
};

int main()
{
    bank b;
}