#include <iostream>
using namespace std;

class Bank
{
private:
    double balance;  

public:
    Bank()
    {
        balance = 0.0;
    }

    void dep(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }
        else
        {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withd(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
        else
        {
            cout << "Invalid or insufficient balance!" << endl;
        }
    }

    void showBal()
    {
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    Bank account;

    account.dep(1000);
    account.withd(500);
    account.showBal();

    return 0;
}