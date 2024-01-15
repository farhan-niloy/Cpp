//
// Created by Niloy Farhan on 15/1/24.
//

#ifndef DERIVINGCLASS01_SAVINGS_ACCOUNT_H
#define DERIVINGCLASS01_SAVINGS_ACCOUNT_H
#include "Account.h"


class Savings_Account: public Account {
public:
    double int_rate;
    Savings_Account();
    ~Savings_Account();

    void deposit(double amount);
    void withdraw(double amount);
};


#endif //DERIVINGCLASS01_SAVINGS_ACCOUNT_H
