#include <iostream>
#include "BankAccount.h"

using namespace std;

int main() {
    string newName;
    double chBalance, sBalance;
    cout << "*********************************" << endl;
    cout << "*********************************" << endl;
    cout << "*********************************" << endl;

    // Prompt the user to enter account details
    cout << "Enter customer name: ";
    getline(cin, newName);

    cout << "Enter checking account balance: $";
    cin >> chBalance;

    cout << "Enter savings account balance: $";
    cin >> sBalance;

    // Create a BankAccount object with user-provided values
    BankAccount person(newName, chBalance, sBalance);

    // Display initial account information
    cout << "\nInitial Account Information:" << endl;
    cout << "Customer Name: " << person.GetName() << endl;
    cout << "Checking Account Balance: $" << person.GetChecking() << endl;
    cout << "Savings Account Balance: $" << person.GetSavings() << endl;

    // Perform transactions
    double depositAmount, withdrawalAmount, transferAmount;

    // Deposit to checking account
    cout << "\nEnter amount to deposit into checking account: $";
    cin >> depositAmount;
    person.DepositChecking(depositAmount);

    // Withdraw from savings account
    cout << "\nEnter amount to withdraw from savings account: $";
    cin >> withdrawalAmount;
    person.WithdrawSavings(withdrawalAmount);

    // Transfer from checking to savings account
    cout << "\nEnter amount to transfer from checking to savings account: $";
    cin >> transferAmount;
    person.TransferToSavings(transferAmount);

    // Display updated account information
    cout << "\nUpdated Account Information:" << endl;
    cout << "Customer Name: " << person.GetName() << endl;
    cout << "Checking Account Balance: $" << person.GetChecking() << endl;
    cout << "Savings Account Balance: $" << person.GetSavings() << endl;

    return 0;
}
