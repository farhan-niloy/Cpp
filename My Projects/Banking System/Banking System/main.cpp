#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::vector;

// Colors
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

class Account {
private:
    string name;
    double balance;
    int deposit;
    int withdraw;
    bool closeAccount;
    static int numAccount;
    
public:
    Account();
    Account(string _name, double _deposit) : name(_name), balance(_deposit), deposit(_deposit) {
        numAccount++;
    }

    string GetName() { return name; }
    double GetBalance() { return balance; }
    int GetNumAccount() { return numAccount; }
    
    void Deposit(double n) {
        if (n > 0) {
            balance += n;
            cout << n << " deposit successful, your total balance now: " << balance;
        }
    }
    
    void Withdraw(double n) {
        if (balance > n && n > 0) {
            balance -= n;
            cout << n << " withdrawal successful, your remaining balance is: " << balance;
        }
    }
};

int Account::numAccount = 0;

Account OpenAccount() {
    string fname;
    string lname;
    double deposit;
    cout << "Enter Full Name: ";
    std::cin >> fname;
    std::cin >> lname;
    cout << "Enter Initial Deposit: ";
    std::cin >> deposit;
       
    Account new_account(fname + " " + lname, deposit);
    
      //TEST RUNS
//    cout<< "Name: " <<new_account.GetName() <<endl;
//    cout<< "Balance: " <<new_account.GetBalance() <<endl;;
//    cout<< "Number of Accounts: " <<new_account.GetNumAccount() <<endl;
//    
    return new_account;
}

int main(int argc, const char * argv[]) {
    std::vector<Account> accounts;
    bool quit = false;
    
    while (!quit) {
        unsigned int options;
        
        cout << "\n\n\n       SELECT ONE OPTION BELOW" << endl;
        cout << "       1 Open an Account \n";
        cout << "       2 Balance Enquiry \n";
        cout << "       3 Deposit \n";
        cout << "       4 Withdraw \n";
        cout << "       5 Close an Account \n";
        cout << "       6 Show All Accounts \n";
        cout << "       7 Quit \n";
        cout << "\nEnter Your Choice: ";
        
        if(!(std::cin >> options)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout <<RED  <<"Invalid input, Enter numbers only! \n" <<RESET;
            continue;
        }
        
        
        if(options>= 1 && options<=7){
            switch (options) {
                case 1: {
                    Account new_account = OpenAccount();
                    cout<<"\n Congratulations New Account Created! " <<endl;
                    cout<< " Name:           " <<new_account.GetName() <<endl;
                    cout<< " Balance:        " <<new_account.GetBalance() <<endl;;
                    cout<< " Account Number: " <<new_account.GetNumAccount() <<endl;
                    accounts.emplace_back(new_account);
                    break;
                }
                case 2:
                    cout << " Balance Enquiry";
                    break;
                case 3:
                    cout << " Deposit";
                    break;
                case 4:
                    cout << " Withdraw";
                    break;
                case 5:
                    cout << " Close an Account";
                    break;
                case 6:
                    cout << " Show All Accounts";
                    break;
                case 7:
                    quit = true;
                    break;
                default:
                    cout << " Invalid Selection: (" << options << ")" << endl;
            }
        } else {
            cout<<"\n Invalid Enter!";
        }
        
//        cout<<"Name: " <<accounts[0].GetName();
//        cout<<"Balance: " <<accounts[0].GetBalance();
//        cout<<"Num Account: " <<accounts[0].GetNumAccount();
    }
    
    return 0;
}
