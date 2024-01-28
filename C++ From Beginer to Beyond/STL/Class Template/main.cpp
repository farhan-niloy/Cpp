#include <iostream>
#include <string>
#include <vector>


template <typename T>
class Item {
private:
    std::string name;
    T value;

public:
    Item(std::string name, T value)
            : name(name), value(value) {}

    const std::string& get_name() const { return name; }
    T get_value() const { return value; }
};

template <typename T1, typename T2>
struct My_Pair {
    T1 first;
    T2 second;
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
