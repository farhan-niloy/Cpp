#include <iostream>

class Base{
public:
    virtual void say_hello() const{
        std::cout<<"Hello - I'm a Base class object" <<std::endl;
    }
    virtual ~Base(){std::cout<<"Destructor Base" <<std::endl;}
};

class Derived:public Base{
public:
    virtual void say_hello() const override{ //forgot const? no problem use override
        std::cout<<"Hello - I'm a Derived class object" <<std::endl;
    }
    virtual ~Derived(){std::cout<<"Destructor Derived" <<std::endl;}
};

int main() {
    Base *p1 = new Base();
    p1->say_hello();

    Derived *p2 = new Derived;
    p2->say_hello();

    Base *p3 = new Derived();
    p3->say_hello();

    delete p1;
    delete p2;
    delete p3;


    return 0;
}
