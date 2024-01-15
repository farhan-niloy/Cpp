#include <iostream>

using std::cout;
using std::endl;

class Base {
private:
    int value;
public:
    Base():value{0}{cout<<"Base no-args constructor called" <<endl;};
    Base(int x): value{x}{cout<<"Base (int) overloaded constructor called" <<endl;};
    ~Base();

};

int main() {


    return 0;
}
