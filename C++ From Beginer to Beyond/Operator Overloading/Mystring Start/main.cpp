#include <iostream>
#include "Mystring.h"

int main() {
    Mystring empty;
    Mystring larry{"Larry"};
    Mystring stooges{Larry};

    empty.display();
    larry.display();
    stooges.display();

    return 0;
}
