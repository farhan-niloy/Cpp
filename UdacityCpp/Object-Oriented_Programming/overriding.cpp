#include <iostream>

class Animal {
public:
    virtual std::string Talk() const {
        return std::string("Animal says something");
    }
};

class Dog : public Animal {
public:
    std::string Talk() const override {
        return std::string("Bark");
    }
};

int main() {
    Animal a;
    Dog d;
  
    a.Talk();
    d.Talk();

    std::cout << "Animal says: " << a.Talk() << std::endl;
    std::cout << "Dog says: " << d.Talk() << std::endl;

    return 0;
}

