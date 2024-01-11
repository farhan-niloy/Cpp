#include <iostream>
#include "Mystring.h"

int main() {

    Mystring a{"Hello"};        //overloaded constructor
    Mystring b;                   //no-arg constructor
    b = a;                        //copy assignment
                                  //b.operator=(a)
    b = "Hello world!";           //b.operator=("Hello world!")

//    Mystring empty;               //no-arg constructor
//    Mystring larry{"Larry"};   //overloaded constructor
//    Mystring stooges{larry};      //copy constructor
//
//    empty.display();
//    larry.display();
//    stooges.display();

    return 0;
}