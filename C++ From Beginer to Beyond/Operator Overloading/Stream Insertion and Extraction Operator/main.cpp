#include <iostream>
#include "Mystring.h"

int main() {
    Mystring larry{"Larry"};
    Mystring moe{"Moe"};
    Mystring curly;

    std::cout<<"Enter the third stooge's first name: ";
    std::cin>> curly;

    std::cout<<"The three stooges are " <<larry <<"," <<curly <<"," <<moe <<std::endl;


    return 0;
}
