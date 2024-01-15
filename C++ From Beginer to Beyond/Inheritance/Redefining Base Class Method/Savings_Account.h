//
// Created by Niloy Farhan on 15/1/24.
//

#ifndef REDEFINING_BASE_CLASS_METHOD_SAVINGS_ACCOUNT_H
#define REDEFINING_BASE_CLASS_METHOD_SAVINGS_ACCOUNT_H
#include "Account.h"


class Savings_Account:public Account {
    friend std::ostream &operator<<(std::ostream &os, const Savings_Account &account);
protected:
    double int_rate;
public:
    Savings_Account();
    Savings_Account(double balance, double int_rate);
    void deposit(double amount);

};


#endif //REDEFINING_BASE_CLASS_METHOD_SAVINGS_ACCOUNT_H
