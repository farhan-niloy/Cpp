#include <iostream>
#include <string>

template <typename T, int N>
class Array {
private:
    int size{N};
    T values[N];

    friend std::ostream &operator<<(std::ostream &os, const Array<T,N> &arr) {
        os << "[ ";
        for(const auto &val: arr.values){
            os <<val <<" ";
        }
        os<<" ]" <<std::endl;

        return os;
    }
public:
    Array() = default;
    Array(T int_val) {
        for (auto &item: values)
            item = int_val;
    }
    void fill(T val) {
        for ( auto &item: values )
            item = val;
    }
    int get_size() const {
        return size;
    }
    T &operator[](int index) {
        return values[index];
    }
};


int main() {
    Array<int, 5> nums;
    std::cout <<"The size of nums is: " <<nums.get_size() <<std::endl;
    std::cout <<nums <<std::endl;

    nums.fill(0);
    std::cout<<"The size of nums is: " <<nums.get_size() <<std::endl;

    nums.fill(10);
    std::cout<<nums <<std::endl;

    nums[0] = 1000;
    nums[3] = 2000;
    std::cout <<nums <<std::endl;

    Array<double, 100> nums2 {20.4};
    std::cout<<"This size of nums2 is: " <<nums2.get_size() <<std::endl;
    std::cout <<nums2 <<std::endl;
}
