//
// Created by Niloy Farhan on 12/1/24.
//

#ifndef OVERLOADING_OPERATOR_AS_MEMBER_FUNCTION_MYSTRING_H
#define OVERLOADING_OPERATOR_AS_MEMBER_FUNCTION_MYSTRING_H


class Mystring{
private:
    char *str;

public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    Mystring(Mystring &&source);
    ~Mystring();


    Mystring &operator=(const Mystring &rhs);
    Mystring &operator=(Mystring &&rhs);

    void display() const;

    int get_length() const;
    const char *get_str() const;


};

#endif //OVERLOADING_OPERATOR_AS_MEMBER_FUNCTION_MYSTRING_H
