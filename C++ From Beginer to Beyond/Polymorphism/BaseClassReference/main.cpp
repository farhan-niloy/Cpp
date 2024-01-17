#include <iostream>

class Account{
public:
    virtual void withdraw(double amount){
        std::cout<<"In Account::Withdraw" <<std::endl;
    }
    virtual ~Account() {std::cout<<"Account Destructor" <<std::endl;};
};

class Checking:public Account{
public:
    virtual void withdraw(double amount) override{
        std::cout<<"In Checking::Withdraw" <<std::endl;
    }
    virtual ~Checking() {std::cout<<"Account Destructor" <<std::endl;};
};

class Savings:public Account{
public:
    virtual void withdraw(double amount) override{
        std::cout<<"In Savings::Withdraw" <<std::endl;
    }
    virtual ~Savings() {std::cout<<"Account Destructor" <<std::endl;};
};

class Trust: public Account{
public:
    virtual void withdraw(double amount) override{
        std::cout<<"In Trust::Withdraw" <<std::endl;
    }
    virtual ~Trust() {std::cout<<"Account Destructor" <<std::endl;};
};

void do_withdraw(Account &account, double amount){
    account.withdraw(amount);
}

int main() {
    Account a;
    Account &ref = a;
    ref.withdraw(1000);

    Trust t;
    Account &ref1 = t;
    ref1.withdraw(1000);

    Account a1;
    Savings a2;
    Checking a3;
    Trust a4;

    do_withdraw(a1, 1000);
    do_withdraw(a3, 1000);
    do_withdraw(a2, 1000);
    do_withdraw(a4, 1000);

    return 0;
}
