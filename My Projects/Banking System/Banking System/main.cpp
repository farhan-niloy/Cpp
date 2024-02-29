#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <stdexcept>

using std::string;
using std::cout;
using std::endl;
using std::vector;

// Colors
#define RESET   "\033[0m"
#define RED     "\033[31m"

int number_of_account;

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
        number_of_account++;
    }

    string GetName() { return name; }
    double GetBalance() { return balance; }
    int GetNumAccount() { return numAccount; }
    
    void Deposit(double n) {
        if (n > 0) {
            balance += n;
            deposit += n;
            cout << n << " Deposit Successful!\n";
        }
    }
    
    void Withdraw(double n) {
        if ( n > 0 && balance > n) {
            balance -= n;
            withdraw += n;
            cout << n << " Withdrawal Successful, Your Remaining Balance Is: " << balance;
        } else {
            cout << "Sorry, Insufficient Funds!" << endl;
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
        cout << "       6 Show Number of Accounts \n";
        cout << "       7 Quit \n";
        cout << "\nEnter Your Choice: ";
        
        // error handling for non-numeric input
        if(!(std::cin >> options)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << RED << "Invalid input, Enter numbers only! \n" << RESET;
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
                    int temp;
                    cout<<"Enter Account No: ";
                    std::cin>> temp;
                    try {
                        cout << "Your Total Balance Is: " << accounts[temp-1].GetBalance();
                    } catch(const std::out_of_range& e) {
                        std::cerr<<"Invalid Account Number!" <<endl;
                    }
                    break;
                case 3:
                    double temp_d;
                    int account_num;
                    cout<<"Enter Deposit Amount: ";
                    std::cin>> temp_d;
                    cout<<"Enter Account Num: ";
                    std::cin>> account_num;
                    
                    try {
                        accounts[account_num - 1].Deposit(temp_d);
                    } catch(const std::out_of_range& e) {
                        std::cerr<<"Invalid Account Number! " <<endl;
                    }
                    break;
                case 4:
                    double temp_w;
                    int account_num_w;
                    cout<<"Enter Withdraw Amount: ";
                    std::cin>> temp_w;
                    cout<<"Enter Account No: ";
                    std::cin>>account_num_w;
                    
                    try {
                        accounts[account_num_w - 1].Withdraw(temp_w);
                    } catch (const std::out_of_range& e) {
                        std::cerr<<"Invalid Account Number! " <<std::endl;
                    }
                    break;
                case 5:
                    int account_num_c;
                    cout<<"To Close Your Account Enter Account Number: ";
                    std::cin>>account_num_c;
                    if (account_num_c >= 1 && account_num_c <= accounts.size()) {
                            accounts.erase(accounts.begin() + account_num_c - 1);
                            cout << "Account " << account_num_c << " closed successfully." << endl;
                            number_of_account -= 1;
                        } else {
                            std::cerr << "\n Invalid Account Number! " << std::endl;
                        }
                    break;
                case 6:
                    cout<<"Number Of Account Is: " <<number_of_account;
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
    }
    
    return 0;
}
