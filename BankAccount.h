#pragma once
// BankAccount.h
#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
using namespace std;

class BankAccount {
public:
    // Constructor
    BankAccount(string newName, double chBalance, double sBalance);

    // Setter and Getter functions for customer name
    void SetName(string newName);
    string GetName() const;

    // Setter and Getter functions for checking account balance
    void SetChecking(double balance);
    double GetChecking() const;

    // Setter and Getter functions for savings account balance
    void SetSavings(double balance);
    double GetSavings() const;

    // Functions to deposit money into checking and savings accounts
    void DepositChecking(double amt);
    void DepositSavings(double amt);

    // Functions to withdraw money from checking and savings accounts
    void WithdrawChecking(double amt);
    void WithdrawSavings(double amt);

    // Function to transfer money from checking to savings account
    void TransferToSavings(double amt);

private:
    string customerName;
    double chBalance;
    double sBalance;
};

#endif
