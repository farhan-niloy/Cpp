#include <iostream>

class Account{
    friend std::ostream &operator<<(std::ostream &os, const Account &acc);
public:
    virtual void withdraw(double amount) {
        std::cout << "In Account::withdraw" << std::endl;
    }
    virtual ~Account(){}
};

std::ostream &operator<<(std::ostream &os, const Account &acc){
    os<<"Account display";
    return os;
}

class Checking: public Account{
    friend std::ostream &operator<<(std::ostream &os, const Account &account);
public:
    virtual void withdraw(double amount){
        std::cout<<"In Checking::withdraw" <<std::endl;
    }
    virtual ~Checking(){}
};

int main() {

    return 0;
}
