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

    std::cout<<std::resetiosflags(std::ios::showbase);
    std::cout<<std::resetiosflags(std::ios::showpos);
    std::cout<<std::resetiosflags(std::ios::uppercase);

    std::cout<<"\n-----------------------------------------\n";
    std::cout<<"Enter an integer: ";
    std::cin>>num;


    std::cout<<"Decimal default :" <<std::dec <<num <<std::endl;
    std::cout<<"Hexadecimal     :" <<std::hex <<num <<std::endl;
    std::cout<<"Hexadecimal     :" <<std::hex <<num <<std::endl;
    std::cout<<"Hexadecimal     :" <<std::hex <<std::nouppercase <<num <<std::endl;

    std::cout<<"Octal           :" <<std::oct <<num <<std::endl;
    std::cout<<"Hexadecimal     :" <<std::hex <<std::showbase <<num <<std::endl;
    std::cout<<"Octal           :" <<std::oct <<num <<std::endl;

    return 0;
}
