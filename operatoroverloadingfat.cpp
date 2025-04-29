#include <iostream>
#include <string>
using namespace std;

class BankManager;

class BankAccount {
private:
    string name;
    double balance;
    static int totalAccounts;

public:
    BankAccount(string n, double b) {
        name = n;
        balance = b;
        totalAccounts++;
    }

    void deposit(double amount) {
        if (amount >= 500) {
            balance += amount;
            cout << "Deposited: Rs. " << amount << "\n";
        } else {
            cout << "Minimum deposit is Rs. 500.\n";
        }
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount.\n";
        } else if (amount > 5000) {
            cout << "Maximum withdrawal per transaction is Rs. 5000.\n";
        } else if (balance - amount < 1000) {
            cout << "Cannot withdraw. Minimum balance of Rs. 1000 must be maintained.\n";
        } else {
            balance -= amount;
            cout << "Withdrawn: Rs. " << amount << "\n";
        }
    }

    friend class BankManager;
};

int BankAccount::totalAccounts = 0;

class BankManager {
public:
    void displayAccountDetails(BankAccount acc) {
        cout << "\nAccount Holder: " << acc.name << "\nBalance: Rs. " << acc.balance << "\n";
    }

    void displayTotalAccounts() {
        cout << "\nTotal Bank Accounts: " << BankAccount::totalAccounts << "\n";
    }
};

int main() {
    string name;
    double initialDeposit;

    cout << "Enter account holder name: ";
    getline(cin, name);

    cout << "Enter initial deposit: ";
    cin >> initialDeposit;

    if (initialDeposit < 1000) {
        cout << "Initial deposit must be at least Rs. 1000. Account not created.\n";
        return 0;
    }

    BankAccount acc(name, initialDeposit);
    BankManager manager;

    acc.deposit(700);
    acc.withdraw(6000);  // Will be rejected
    acc.withdraw(2000);  // Valid

    manager.displayAccountDetails(acc);
    manager.displayTotalAccounts();

    return 0;
}
