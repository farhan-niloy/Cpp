#include <iostream>
#include <iomanip>

void ruller(){
    std::cout<<"\n12345678901234567890123456789012345678901234567890" <<std::endl;
}

int main() {

    int num1 {1234};
    int num2 {12345678};
    std::string hello {"Hello"};

    std::cout<<"--Defaults------------------------------------------" <<std::endl;
    ruller();
    std::cout<<num1
             <<num2
             <<hello
             <<std::endl;

    std::cout<<"--Defaults One per Line------------------------------------------" <<std::endl;
    ruller();
    std::cout<<num1 <<std::endl;
    std::cout<<num2 <<std::endl;
    std::cout<<hello <<std::endl;

    std::cout<<"--Width 10 for num1------------------------------------------" <<std::endl;
    ruller();
    std::cout<<std::setw(10) <<num1
             <<num2
             <<hello
             <<std::endl;

    std::cout<<"--Width 10 for num1------------------------------------------" <<std::endl;
    ruller();
    std::cout<<std::setw(10) <<num1
             <<std::setw(10) <<num2
             <<std::setw(10) <<hello
             <<std::endl;

    return 0;
}
