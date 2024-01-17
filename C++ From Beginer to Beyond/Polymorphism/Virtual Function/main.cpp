#include <iostream>

class Account{
public:
    void withdraw(double amount){
        std::cout<<"In Account::Withdraw" <<std::endl;
    }
};

class Checking:public Account{
    void withdraw(double amount){
        std::cout<<"In Checking::Withdraw" <<std::endl;
    }
};

class Savings:public Account{
    void withdraw(double amount){
        std::cout<<"In Savings::Withdraw" <<std::endl;
    }
};

class Trust: public Account{
    void withdraw(double amount){
        std::cout<<"In Trust::Withdraw" <<std::endl;
    }
};

int main() {

    std::cout<<"\n===Pointers======"

    return 0;
}
