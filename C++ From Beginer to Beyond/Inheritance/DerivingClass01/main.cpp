#include <iostream>
#include "Account.h"
#include "Savings_Account.h"

using std::cout;
using std::endl;

int main() {

    //Use the Account class
    cout<<"\n===Account==============================" <<endl;
    Account acc{};
    acc.deposit(2000.0);
    acc.withdraw(400.0);

    cout<<endl;

    Account *p_acc = nullptr;
    p_acc = new Account();
    p_acc->deposit(1000.0);
    p_acc->withdraw(500.0);
    delete p_acc;

    //Use the Savings Account class

    cout<<"\n===Savings Account========================" <<endl;
    Savings_Account s_acc{};
    s_acc.deposit(2000.0);
    s_acc.withdraw(400.0);

    cout<<endl;

    Account *p_s_acc{nullptr};
    p_s_acc = new Account();
    p_s_acc->deposit(1000);
    p_s_acc->withdraw(500.00);
    delete p_s_acc;
    return 0;
}
