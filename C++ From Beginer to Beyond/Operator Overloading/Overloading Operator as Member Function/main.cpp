#include <iostream>
#include <string>
#include "Mystring.h"

int main() {
    bool boolalpha;
    std::cout << boolalpha << std::endl;

    Mystring larry{"Larry"};
    Mystring moe{"Moe"};

    Mystring stooge = larry;
    larry.display();
    moe.display();

    std::cout<<(larry == moe) <<std::endl;
    std::cout<<(larry == stooge) <<std::endl;

    larry.display();
    Mystring larry2 = -larry;
    larry2.display();

    Mystring stooges = larry + "Moe";

    Mystring two_stooges = moe + " " + "Larry";
    two_stooges.display();

    Mystring three_stooges = moe +" " + larry + " " + "Curly";
    three_stooges.display();

    return 0;
}
