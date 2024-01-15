#include <iostream>

using std::cout;
using std::endl;

class Base{
private:
    int value;
public:
    Base()
        :value{0}{
        cout<<"Base no-args constructor" <<endl;
    }
    Base(int x)
        :value{x}{
        cout<<"int Base constructor" <<endl;
    }
    Base(const Base &other)
        :value{other.value}{
        cout<<"Base copy constructor" <<endl;
    }

    Base &operator=(const Base &rhs){

    }
};

class Derived{

};

int main() {

    return 0;
}
