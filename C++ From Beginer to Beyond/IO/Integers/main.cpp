#include <iostream>
#include <iomanip>

int main() {
    int num {255};
    std::cout<<std::dec <<num <<std::endl;
    std::cout<<std::oct <<num <<std::endl;
    std::cout<<std::hex <<num <<std::endl;

    std::cout<<"\n-----------------------------------------\n";
    std::cout<<std::showbase;
    std::cout<<std::dec <<num <<std::endl;
    std::cout<<std::oct <<num <<std::endl;
    std::cout<<std::hex <<num <<std::endl;

    return 0;
}
