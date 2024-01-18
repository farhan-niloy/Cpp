#include <iostream>

class I_Printable {
    friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);
public:
    virtual void print(std::ostream &os) const = 0;
};

std::ostream &operator<<(std::ostream &os, const I_Printable &obj){
    obj.print(os);
    return os;
}

class Account:public I_Printable{
public:
    virtual void withdraw(double amount) {
        std::cout << "In Account::withdraw" << std::endl;
    }
    virtual void print(std::ostream &os) const {
        os<<"Account display";
    }
    virtual ~Account(){}
};

class Checking: public Account{
public:
    virtual void withdraw(double amount){
        std::cout<<"In Checking::withdraw" <<std::endl;
    }
    virtual void print(std::ostream &os) const {
        os<<"Checking display";
    }
    virtual ~Checking(){}
};

int main() {
    Account *p1 = new Account();
    std::cout<<*p1<<std::endl;

    Account *p2 = new Checking();
    std::cout<<*p2<<std::endl;

    return 0;
}
