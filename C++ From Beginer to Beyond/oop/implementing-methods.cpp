#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;

class Account {
private:
    string name;
    double balance;

public:
    void set_balance(double bal) { balance += bal; }
    double get_balance() { return balance; }

    void set_name(string n);
    string get_name();

    bool deposit (double amount);
    bool withdraw (double amount);
};

void Account::set_name(string n) { name = n; }
string Account::get_name() { return name;}

bool Account::deposit(double amount) { balance += amount; return true;}
bool Account::withdraw(double amount) {
    if(balance-amount > 0){
        balance -= amount;
        return true;
    } else {
        return false;
    }
}

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

    if(gins_account.deposit(1000))
        cout<<"Withdraw Ok" <<endl;
    else
        cout<<"Not Sufficient Fund! " <<endl;

    return 0;
}