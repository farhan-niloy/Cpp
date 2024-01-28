#include <iostream>
#include <string>

template <int N>
class Array {
private:
    int size{N};
    int values{N};

    friend std::ostream &operator<<(std::ostream &os, const Array<N> &arr) {
        os << "[ ";
        for(const auto &val: arr.values){
            os <<val <<" ";
        }
        os<<" ]" <<std::endl;

        return os;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
