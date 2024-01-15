//
// Created by Niloy Farhan on 15/1/24.
//

#include "Savings_Account.h"
#include <iostream>

Savings_Account::Savings_Account() {

}

Savings_Account::~Savings_Account() {

}

void Savings_Account::deposit(double amount) {
    std::cout<<"Savings Account deposit amount: " <<amount <<std::endl;
}

void Savings_Account::withdraw(double amount) {
    std::cout<<"Savings Account withdraw amount: " <<amount <<std::endl;
}