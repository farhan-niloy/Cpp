//
// Created by Niloy Farhan on 12/1/24.
//

#ifndef OVERLOADING_OPERATOR_AS_MEMBER_FUNCTION_MYSTRING_H
#define OVERLOADING_OPERATOR_AS_MEMBER_FUNCTION_MYSTRING_H
#include <iostream>


class Mystring  {

    friend std::ostream &operator <<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator >>(std::istream &in, Mystring &rhs);


private:
    char *str;

public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    Mystring(Mystring &&source);
    ~Mystring();


    Mystring &operator=(const Mystring &rhs);       //Copy assignment
    Mystring &operator=(Mystring &&rhs);        //Move assignment

    Mystring operator-() const;     //Make lowercase
    Mystring operator+(const Mystring &rhs) const;      //Concatenate
    bool operator==(const Mystring &rhs) const;     //Compare

    void display() const;

    int get_length() const;
    const char *get_str() const;


};

#endif //OVERLOADING_OPERATOR_AS_MEMBER_FUNCTION_MYSTRING_H
