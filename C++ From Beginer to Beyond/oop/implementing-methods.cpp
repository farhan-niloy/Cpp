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

int main(){

    void Account::set_name(string n) {name = n; }

    return 0;
}