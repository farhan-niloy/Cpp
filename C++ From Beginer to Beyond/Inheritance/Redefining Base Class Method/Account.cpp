//
// Created by Niloy Farhan on 15/1/24.
//

#include "Account.h"

Account::Account()
    :Account{0.0}{
}

Account::Account(double blance)
    :blance{blance}{
}

void Account::deposit(double amount){
    blance += amount;
}

void Account::withdraw(double amount){
    if(blance-amount >= 0)
        blance-=amount;
    else
        std::cout<<"Insufficient funds" <<std::endl;
}

std::ostream &operator<<(std::ostream &os, const Account &account){
    os << "Account balance:" <<account.blance;
    return os;
}