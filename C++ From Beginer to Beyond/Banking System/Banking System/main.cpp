//
//  main.cpp
//  Banking System
//
//  Created by Niloy Farhan on 27/2/24.
//

#include <iostream>
#include <map>

using std::string;
using std::cout;
using std::endl;
using std::ofstream;
using std::ifstream;
using std::ostream;

class Account {
private:
    long accountNumber;
    string fName;
    string lName;
    float balance;
    static long int NextAccountNumber;
    
public:
    Account() {}
    Account(string _fname, string _lname, float balance);
    
    long GetAccount()  { return accountNumber; }
    string GetFName()  { return fName; }
    string GettLName() { return lName; }
    float GetBalance() { return balance; }
    
    void Deposit(float amount);
    void Withdraw(float amount);
    static void setLastName(long accountNumber);
    static long getLastAccountNumber();
    
    friend ofstream & operator << (ofstream &ofs, Account &acc);
    friend ifstream & operator >> (ofstream &ifs, Account &acc);
    friend ostream & operator <<(ostream &os, Account &acc);
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
