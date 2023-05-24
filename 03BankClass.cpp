#include <iostream>
#include <string>

using namespace std;

class BankAccount 
{

    private:
        string nameOfDepositor;
        int accountNumber;
        string typeOfAccount;
        float balanceAmount;

    public:
        void assignValues(string name, int accNo, string accType, float balance);
        void depositAmount(float amount);
        void withdrawAmount(float amount);
        void displayBalance();

};

void BankAccount::assignValues(string name, int accNo, string accType, float balance) 
{
    nameOfDepositor = name;
    accountNumber = accNo;
    typeOfAccount = accType;
    balanceAmount = balance;
}

void BankAccount::depositAmount(float amount) 
{
    balanceAmount += amount;
    cout << "Amount deposited successfully.\n";
}

void BankAccount::withdrawAmount(float amount) 
{
    if (balanceAmount >= amount) 
    {
        balanceAmount -= amount;
        cout << "Amount withdrawn successfully.\n";
    } else 
    {
        cout << "Insufficient balance. Withdrawal failed.\n";
    }
}

void BankAccount::displayBalance() 
{
    cout << "Name of the depositor: " << nameOfDepositor << endl;
    cout << "Balance amount in the account: " << balanceAmount << endl;
}

int main() 
{
    BankAccount acc;
    string name, type;
    int accNo;
    float balance, amount;

    cout << "Enter name of depositor: ";
    getline(cin, name);
    // cin>>name;

    cout << "Enter account number: ";
    cin >> accNo;

    cout << "Enter type of account: ";
    cin >> type;

    cout << "Enter balance amount: ";
    cin >> balance;

    acc.assignValues(name, accNo, type, balance);

    cout << "Enter amount to deposit: ";
    cin >> amount;

    acc.depositAmount(amount);

    cout << "Enter amount to withdraw: ";
    cin >> amount;

    acc.withdrawAmount(amount);

    acc.displayBalance();

    return 0;
}