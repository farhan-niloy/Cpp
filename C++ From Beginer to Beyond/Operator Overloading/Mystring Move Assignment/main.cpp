#include <iostream>
#include <vector>
#include "Move_Assignment.h"

int main() {
    Mystring a{"Hello!"};
    a = Mystring{"Hola"};
    a = "Bonjur";

    Mystring empty;                //no-arg constructor
    Mystring larry{"Larry"};    //overloaded constructor
    Mystring stooges{larry};       //copy constructor

    empty.display();
    larry.display();
    stooges.display();
    empty.display();

    stooges = "Larry, Moe, and Curly";
    stooges.display();

    std::vector<Mystring> stooges_vec;
    stooges_vec.push_back("Larry");
    stooges_vec.push_back("Moe");
    stooges_vec.push_back("Curly");


    std::cout << "\n==========Loop1==================\n" << std::endl;

    for (const Mystring &s : stooges_vec)
        s.display();

    std::cout << "\n==========Loop2==================\n"<< std::endl;

    for (Mystring &s : stooges_vec)
        s = "Changed";

    std::cout << "\n==========Loop3==================\n" << std::endl;

    for (const Mystring &s : stooges_vec)
        s.display();

    return 0;
}