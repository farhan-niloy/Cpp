#include <iostream>
#include "Account.h"

using std::cout;
using std::endl;
using std::cout;

int main(){
    Account gins_account;
    gins_account.set_name("Gin");
    gins_account.set_balance(1000.00);

    if(gins_account.deposit(200.00)){
        cout<<"Deposit OK" <<endl;
    } else {
        cout<<"Deposit Not Allowed!" <<endl;
    }

    if(gins_account.withdraw(500))
        cout<<"Withdraw Ok" <<endl;
    else
        cout<<"Not Sufficient Fund! " <<endl;

    if(gins_account.withdraw(1000))
        cout<<"Withdraw Ok" <<endl;
    else
        cout<<"Not Sufficient Fund! " <<endl;

    return 0;
}