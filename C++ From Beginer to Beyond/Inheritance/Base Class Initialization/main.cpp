#include <iostream>

using std::cout;
using std::endl;

class Base{
private:
    int value;
public:
    Base():value{0}{cout<<"Base no-args constructor" <<endl;};
    Base(int x):value{x}{cout<<"Base (int) overloaded constructor" <<endl;};
};

class Derived: public Base {
private:
    int double_value;
public:
    Derived()
        :Base{}, double_value{0}{
        cout<<"Derived no-args constructor" <<endl;
    }
    Derived(int x)
        :Base{x}, double_value{x*2} {
        cout<<"Derived (int) constructor " <<endl;
    }
    ~Derived(){
        cout<<"Derived destructor" <<endl;
    }
};

int main() {
    Derived d;
    Derived c{200};
    return 0;
}
