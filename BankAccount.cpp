// BankAccount.cpp
#include "BankAccount.h"
#include <iostream>

// Constructor definition
BankAccount::BankAccount(string newName, double chBalance, double sBalance) {
    SetName(newName);
    SetChecking(chBalance);
    SetSavings(sBalance);
}

// Setter function for customer name
void BankAccount::SetName(string newName) {
    customerName = newName;
}

// Getter function for customer name
string BankAccount::GetName() const {
    return customerName;
}

// Setter function for checking account balance
void BankAccount::SetChecking(double balance) {
    chBalance = balance;
}

// Getter function for checking account balance
double BankAccount::GetChecking() const {
    return chBalance;
}

// Setter function for savings account balance
void BankAccount::SetSavings(double balance) {
    sBalance = balance;
}

// Getter function for savings account balance
double BankAccount::GetSavings() const {
    return sBalance;
}

// Function to deposit money into checking account
void BankAccount::DepositChecking(double amt) {
    if (amt > 0) {
        chBalance += amt;
        cout << "Successfully deposited $" << amt << " into checking account." << endl;
    }
    else {
        cout << "Deposit amount must be positive." << endl;
    }
}

// Function to deposit money into savings account
void BankAccount::DepositSavings(double amt) {
    if (amt > 0) {
        sBalance += amt;
        cout << "Successfully deposited $" << amt << " into savings account." << endl;
    }
    else {
        cout << "Deposit amount must be positive." << endl;
    }
}

// Function to withdraw money from checking account
void BankAccount::WithdrawChecking(double amt) {
    if (amt > 0 && amt <= chBalance) {
        chBalance -= amt;
        cout << "Successfully withdrew $" << amt << " from checking account." << endl;
    }
    else {
        cout << "Withdrawal amount must be positive and less than or equal to checking account balance." << endl;
    }
}

// Function to withdraw money from savings account
void BankAccount::WithdrawSavings(double amt) {
    if (amt > 0 && amt <= sBalance) {
        sBalance -= amt;
        cout << "Successfully withdrew $" << amt << " from savings account." << endl;
    }
    else {
        cout << "Withdrawal amount must be positive and less than or equal to savings account balance." << endl;
    }
}

// Function to transfer money from checking to savings account
void BankAccount::TransferToSavings(double amt) {
    if (amt > 0 && amt <= chBalance) {
        chBalance -= amt;
        sBalance += amt;
        cout << "Successfully transferred $" << amt << " from checking account to savings account." << endl;
    }
    else {
        cout << "Transfer amount must be positive and less than or equal to checking account balance." << endl;
    }
}