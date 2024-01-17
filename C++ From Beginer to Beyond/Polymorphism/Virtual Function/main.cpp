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
   virtual void withdraw(double amount){
        std::cout<<"In Checking::Withdraw" <<std::endl;
    }
    virtual ~Checking() {std::cout<<"Account Destructor" <<std::endl;};
};

class Savings:public Account{
public:
  virtual void withdraw(double amount){
        std::cout<<"In Savings::Withdraw" <<std::endl;
    }
    virtual ~Savings() {std::cout<<"Account Destructor" <<std::endl;};
};

class Trust: public Account{
public:
    virtual void withdraw(double amount){
        std::cout<<"In Trust::Withdraw" <<std::endl;
    }
    virtual ~Trust() {std::cout<<"Account Destructor" <<std::endl;};
};

int main() {

    std::cout<<"\n===Pointers======" <<std::endl;
    Account *p1 = new Account();
    Account *p2 = new Savings();
    Account *p3 = new Checking();
    Account *p4 = new Trust();

    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);

    std::cout<<"\n==== Clean up=======" <<std::endl;
    delete p1;
    delete p2;
    delete p3;
    delete p4;

    return 0;
}
