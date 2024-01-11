//
// Created by Niloy Farhan on 11/1/24.
//

#include "Mystring.h"
#include <iostream>
#include <cstring>

Mystring::Mystring()
    :str(nullptr) {
    str = new char[1];
    *str = '\0';
}

Mystring::Mystring(const char *s)
    :str{nullptr}{
    if(s == nullptr) {
        str = new char[1];
        *str = '\0';
    }else {
        str = new char[std::strlen(s)+1];
        std::strcpy(str, s);
    }
}


