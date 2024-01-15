//
// Created by Niloy Farhan on 15/1/24.
//

#ifndef REDEFINING_BASE_CLASS_METHOD_ACCOUNT_H
#define REDEFINING_BASE_CLASS_METHOD_ACCOUNT_H
#include <iostream>

class Account {
    friend std::ostream &operator<<(std::ostream &os, const Account &account);
protected:
    double blance;
public:
    Account();
    Account(double blance);
    ~Account();
    void deposit(double amount);
    void withdraw(double amount);
};


#endif //REDEFINING_BASE_CLASS_METHOD_ACCOUNT_H
