//
// Created by Niloy Farhan on 12/1/24.
//

#include "Mystring.h"
#include <iostream>
#include <cstring>


//No-args constructor
Mystring::Mystring()
    :str{nullptr}{
    str = new char[1];
    *str = '\0';
}

//Overloaded constructor
Mystring::Mystring(const char *s)
    :str{nullptr}{
    if (s == nullptr){
        str = new char[1];
        *str = '\0';
    }else {
        str = new char[std::strlen(s)+1];
        std::strcpy(str, s);
    }

}

//Copy constructor
Mystring::Mystring(const Mystring &source)
    :str{nullptr} {
    str = new char[std::strlen(source.str)+1];
    std::strcpy(str, source.str);
}

//Destructor
Mystring::~Mystring(){
    delete [] str;
}

//Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs){
    if(this == &rhs)
        return *this;
    delete [] str;
    str = new char[std::strlen(rhs.str)+1];
    std::strcpy(str, rhs.str);
    return *this;
}

//Move assignment operator
Mystring &Mystring::operator=(Mystring &&rhs){
    std::cout<<"Using move assignment" <<std::endl;
    if(this == &rhs)
        return *this;
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

//Equality
bool Mystring::operator==(const Mystring &rhs) const {
    return (std::strcmp(str, rhs.str));
}

//Make lowercase
Mystring Mystring::operator-() const {
    char *buff = new char[std::strlen(str)+1];
    std::strcpy(buff, str);
    for(size_t i=0; i<std::strlen(buff); i++)
        buff[i] = std::tolower(buff[i]);
    Mystring temp {buff};
    delete [] buff;
    return buff;
}

//Concatenate
Mystring Mystring::operator+(const Mystring &rhs) const {
    char *buff = new char[std::strlen(str) + std::strlen(rhs.str) +1];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);
    Mystring temp{buff};
    delete [] buff;
    return temp;
}


//Display method
void Mystring::display() const {
    std::cout<<str<<" : " <<get_length() <<std::endl;
}

//length getter
int Mystring::get_length() const {return std::strlen(str);}

//string getter
const char *Mystring::get_str() const {return str;}

//Overloaded insertion operator
std::ostream &operator<<(std::ostream &os, const Mystring &rhs) {
    os << rhs.str;
    return  os;
}

//Overloaded extraction operator
std::istream &operator>>(std::istream &in, Mystring &rhs){
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring{buff};
    delete [] buff;
    return in;

}
