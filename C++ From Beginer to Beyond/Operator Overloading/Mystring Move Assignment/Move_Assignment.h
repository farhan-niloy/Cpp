//
// Created by Niloy Farhan on 12/1/24.
//

#ifndef MYSTRING_MOVE_ASSIGNMENT_MOVE_ASSIGNMENT_H
#define MYSTRING_MOVE_ASSIGNMENT_MOVE_ASSIGNMENT_H


class Mystring {
private:
    char *str;

public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    ~Mystring();

    Mystring &operator=(const Mystring &rhs);       //copy assignment
    Mystring &operator=(Mystring &&rhs);            //move assignment

    void display() const;
    int get_length() const;
    const char *get_str() const;
};



#endif //MYSTRING_MOVE_ASSIGNMENT_MOVE_ASSIGNMENT_H
