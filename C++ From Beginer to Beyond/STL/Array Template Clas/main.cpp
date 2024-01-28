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
public:
    Array() = default;
    Array(int int_val) {
        for (auto &item: values)
            item = int_val;
    }
    void fill(int val) {
        for ( auto &item: values )
            item = val;
    }
    int get_size() const {
        return size;
    }
    int &operator[](int index) {
        return values[index];
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
