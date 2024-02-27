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
using std::cin;
using std::endl;
using std::ofstream;
using std::ifstream;
using std::ostream;
using std::map;

class Account {
private:
    long accountNumber;
    string fName;
    string lName;
    float balance;
    static long int NextAccountNumber;
    
public:
    Account() {}
    Account(string _fname, string _lname, float _balance);
    
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

long Account::NextAccountNumber = 0;

class Bank {
private:
    map<long, Account> accounts;
    
public:
    Bank();
    Account openAccount(string _fname, string _lname, float _balance);
    Account BalanceEnquiry(long accountNumber);
    Account Deposit(long accountNumber, float amount);
    Account Withdraw(long accountNumber, float amount);
    void ColoseAccount(long accountNumber);
    void ShowAllAccounts();
    ~Bank();
};

int main(int argc, const char * argv[]) {
    Bank b; 
    Account acc;
    
    int choice;
    string fname,lname;
    
    long accountNumber;
    float balance;
    float amount;
    
    cout<<"***Banking System***" <<endl;
    do {
        cout<<"\n\tSelect One Option Below ";
        cout<<"\n\t1 Open an Account";
        cout<<"\n\t2 Balance Enquiry";
        cout<<"\n\t3 Deposit";
        cout<<"\n\t4 Withdrawal";
        cout<<"\n\t5 Close an Account";
        cout<<"\n\t6 Show All accounts";
        cout<<"\n\t7 Quit";
        cout<<"\nEnter your choise: ";
        cin>>choice;
        
        switch(choice) {
            case 1:
                cout<<"Enter First Name: ";
                cin>>fname;
                cout<<"Enter Last Name: ";
                cin>>lname;
                cout<<"Enter initial Balance: ";
                cin>>balance;
                acc = b.openAccount(fname, lname, balance);
                cout<<endl <<"Congratulations Account is Created! " <<endl;
                cout<<acc;
                break;
            case 2:
                cout<<"Enter Account Number: ";
                cin>>accountNumber;
                acc=b.BalanceEnquiry(accountNumber);
                cout<<endl<<"Your Account Details" <<endl;
                cout<<acc;
                break;
            case 3:
                cout<<"Enter Account Number: ";
                cin>>accountNumber;
                cout<<"Enter Balance: ";
                cin>>amount;
                acc=b.Deposit(accountNumber, amount);
                cout<<endl <<"Amount is Deposited" <<endl;
                cout<<acc;
                break;
            case 4:
                cout<<"Enter Account Number: ";
                cin>>accountNumber;
                cout<<"Enter Balance: ";
                cin>>amount;
                acc=b.Withdraw(accountNumber, amount);
            case 5:
                cout<<"Enter Account Number: ";
                cin>>accountNumber;
                b.ColoseAccount(accountNumber);
                cout<<endl<<"Account is Closed! " <<endl;
                cout<<acc;
            case 6:
                b.ShowAllAccounts();
                break;
            case 7:
                break;
            default:
                cout<<"\nEnter correct Choice!";
                exit(0);
        }
        
    } while(choice != 7);

    return 0;
}


