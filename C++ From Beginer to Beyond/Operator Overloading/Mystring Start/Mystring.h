//
// Created by Niloy Farhan on 11/1/24.
//

#ifndef MYSTRING_START_MYSTRING_H
#define MYSTRING_START_MYSTRING_H


class Mystring {
private:
    char *str;

public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    ~Mystring();

    void display() const;
    int get_length() const;
    const char *get_str() const;
};


#endif //MYSTRING_START_MYSTRING_H
