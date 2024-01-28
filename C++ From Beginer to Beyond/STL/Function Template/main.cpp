#include <iostream>
#include <string>

template <typename T>
T min(T a, T b){
    return (a < b) ? a: b;
}

int main() {

    std::cout<<min<int>(2,3)<<std::endl;
    std::cout<<min(2,3)<<std::endl;
    std::cout<<min('A', 'B')<<std::endl;
    std::cout<<min(2+5*8,30+7)<<std::endl;
}
