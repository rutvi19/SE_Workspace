#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

// Function to display welcome screen with current date and time
void showWelcome() {
    time_t currentTime = time(0);
    tm *istTime = gmtime(&currentTime);

    istTime->tm_hour += 5;
    istTime->tm_min += 30;
    mktime(istTime);

    cout << "-------------------- WELCOME TO ATM --------------------" << endl;
    cout << "Current Date : " << put_time(istTime, "%d-%m-%Y") << endl;
    cout << "Current Time : " << put_time(istTime, "%I:%M:%S %p") << " (IST)" << endl;
    cout << "--------------------------------------------------------" << endl;
}

// Function to display help screen
void displayHelp() {
    cout << "\nHelp Information:\n";
    cout << "Use the correct PIN (12345) to access your account.\n";
    cout << "Visit your bank branch for further support.\n";
    cout << "Thanks for your visit today!" << endl;
}

// Base class for account
class BankAccount {
public:
    static int balance;
};

int BankAccount::balance = 40000;

// Deposit class
class CashDeposit : public BankAccount {
public:
    int depositAmt;
    void makeDeposit() {
        cout << "Enter Amount to Deposit: ";
        cin >> depositAmt;
        balance += depositAmt;
        cout << "Amount Deposited Successfully!" << endl;
        cout << "Current Balance: Rs. " << balance << endl;
    }
};

// Withdraw class
class CashWithdraw : public BankAccount {
public:
    int withdrawAmt;
    void makeWithdrawal() {
        cout << "Enter Amount to Withdraw: ";
        cin >> withdrawAmt;
        if (withdrawAmt > balance) {
            cout << "Insufficient balance!" << endl;
            cout << "Transaction Failed!" << endl;
        } else {
            balance -= withdrawAmt;
            cout << "Withdrawal Successful!" << endl;
            cout << "Current Balance: Rs. " << balance << endl;
        }
    }
};

// Balance Inquiry class
class CheckBalance : public BankAccount {
public:
    void displayBalance() {
        cout << "Your Available Balance: Rs. " << balance << endl;
    }
};

// ATM Menu class
class AtmMenu {
public:
    void openMenu() {
        int option;
        while (true) {
            cout << "\n-------------------- ATM MAIN MENU --------------------" << endl;
            cout << "1. Deposit Cash" << endl;
            cout << "2. Withdraw Cash" << endl;
            cout << "3. Balance Inquiry" << endl;
            cout << "0. Exit ATM" << endl;
            cout << "--------------------------------------------------------" << endl;
            cout << "Enter your choice: ";
            cin >> option;

            switch (option) {
                case 1: {
                    CashDeposit deposit;
                    deposit.makeDeposit();
                    break;
                }
                case 2: {
                    CashWithdraw withdraw;
                    withdraw.makeWithdrawal();
                    break;
                }
                case 3: {
                    CheckBalance inquiry;
                    inquiry.displayBalance();
                    break;
                }
                case 0:
                    cout << "Thank you for using the ATM. Goodbye!" << endl;
                    exit(0);
                default:
                    cout << "Invalid choice. Please try again." << endl;
            }
        }
    }
};

// PIN Verification class
class PinVerifier {
public:
    int inputPin;
    void verifyPin() {
        cout << "\nEnter your ATM PIN (Only one attempt allowed): ";
        cin >> inputPin;

        if (inputPin == 12345) {
            cout << "Access Granted!" << endl;
            AtmMenu menu;
            menu.openMenu();
        } else {
            cout << "Incorrect PIN! Exiting..." << endl;
        }
    }
};

// ATM Access Menu
class AtmAccess {
public:
    int action;
    void showAccessOptions() {
        cout << "\nATM ACCESS MENU:" << endl;
        cout << "Press 1 and Enter to access your account via PIN" << endl;
        cout << "Press 0 and Enter to view Help screen" << endl;
        cout << "Enter your choice: ";
        cin >> action;

        switch (action) {
            case 0:
                displayHelp();
                break;
            case 1: {
                PinVerifier pin;
                pin.verifyPin();
                break;
            }
            default:
                cout << "Invalid input. Please restart the ATM session." << endl;
        }
    }
};

// Main function
int main() {
    showWelcome();

    AtmAccess atmSession;
    atmSession.showAccessOptions();

    return 0;
}
