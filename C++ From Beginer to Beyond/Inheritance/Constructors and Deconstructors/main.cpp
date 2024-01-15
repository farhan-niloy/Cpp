#include <iostream>

using std::cout;
using std::endl;

class Base {
private:
    int value;
public:
    Base():value{0}{cout<<"Base no-args constructor called" <<endl;};
    Base(int x): value{x}{cout<<"Base (int) overloaded constructor called" <<endl;};
    ~Base(){cout<<"Base destructor called"<<endl;};
};

class Derived:public Base {
    using Base::Base;
private:
    int double_value;
public:
    Derived():double_value{0} {cout<<"Derived no-args constructor called" <<endl;};
    Derived(int x): double_value{x*2} {cout<<"Derived (int) overloaded constructor called" <<endl;};
    ~Derived() {cout<<"Derived destructor called"<<endl;} ;
};

int main() {
    Base b;
    Base c{200};

    Derived a{};
    Derived d{100};


    return 0;
}
