#include <iostream>
#include <vector>
#include "Move_Assignment.h"

int main() {
    Mystring a{"Hello!"};
    a = Mystring{"Hola"};
    a = "Bonjur";

    return 0;
}
