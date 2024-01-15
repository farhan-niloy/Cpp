#include "Account.h"
#include "Savings_Account.h"

int main() {
    std::cout<<"\n=====Account Class==========================" <<std::endl;
    Account a1{1000.0};
    std::cout<<a1<<std::endl;

    a1.deposit(500.0);
    std::cout<<a1<<std::endl;

    a1.withdraw(1000);
    std::cout<<a1<<std::endl;

    a1.withdraw(10000);
    std::cout<<a1<<std::endl;

    std::cout<<"\n=====Savings Account Class=======================" <<std::endl;
    Savings_Account s1{1000, 5.0};
    std::cout <<s1 <<std::endl;

    s1.deposit(1000);
    std::cout<<s1<<std::endl;

    s1.withdraw(2000);
    std::cout<<s1<<std::endl;

    s1.withdraw(1000);
    std::cout<<s1<<std::endl;

    return 0;
}
