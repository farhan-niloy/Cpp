#include <iostream>
#include "Mystring.h"

int main() {
    Mystring empty;               //no arg constructor
    Mystring larry{"Larry"};   //overloaded constructor
    Mystring stooges{larry};      //copy constructor

    empty.display();
    larry.display();
    stooges.display();

    return 0;
}