//
// Created by Niloy Farhan on 13/1/24.
//

#ifndef OPERATOR_AS_GLOBAL_FUNCTION_MYSTRING_H
#define OPERATOR_AS_GLOBAL_FUNCTION_MYSTRING_H

class Mystring{

    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator-(const Mystring &obj);

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

    void display() const;

    int get_length() const;
    const char *get_str() const;


};

#endif //OPERATOR_AS_GLOBAL_FUNCTION_MYSTRING_H
