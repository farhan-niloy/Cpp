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

    std::cout<<"\n-----------------------------------------\n";
    std::cout<<std::uppercase <<std::showbase;
    std::cout<<std::dec <<num <<std::endl;

    std::cout<<"\n-----------------------------------------\n";
    std::cout<<std::showpos;
    std::cout<<std::dec <<num <<std::endl;
    std::cout<<std::oct <<num <<std::endl;
    std::cout<<std::hex <<num <<std::endl;

    std::cout.setf(std::ios::showbase);
    std::cout.setf(std::ios::showpos);
    std::cout.setf(std::ios::uppercase);



    return 0;
}
