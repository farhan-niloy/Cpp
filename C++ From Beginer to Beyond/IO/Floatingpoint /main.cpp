#include <iostream>
#include <iomanip>


int main() {
    double num1 {12345689.987654321};
    double num2 {1234.5678};
    double num3 {1234.0};

    std::cout<<"--Defaults----------------------------" <<std::endl;
    std::cout<<num1 <<std::endl;
    std::cout<<num2 <<std::endl;
    std::cout<<num3 <<std::endl;

    std::cout<<"--Precision----------------------------" <<std::endl;
    std::cout<<std::setprecision(2);
    std::cout<<num1 <<std::endl;
    std::cout<<num2 <<std::endl;
    std::cout<<num3 <<std::endl;

    std::cout<<"--Fixed----------------------------" <<std::endl;
    std::cout <<std::setprecision(3) <<std::fixed;
    std::cout<<num1 <<std::endl;
    std::cout<<num2 <<std::endl;
    std::cout<<num3 <<std::endl;

    std::cout<<"--Scientific----------------------------" <<std::endl;
    std::cout <<std::setprecision(3) <<std::scientific;
    std::cout<<num1 <<std::endl;
    std::cout<<num2 <<std::endl;
    std::cout<<num3 <<std::endl;

    return 0;
}
