#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <cctype>


class Person{
private:
    std::string name;
    int age;
public:
    Person() = default;
    Person(std::string name, int age)
        :name{name}, age{age}{}

    bool operator<(const Person &rhs) const {
        return this->age < rhs.age;
    }
    bool operator==(const Person &rhs) const {
        return(this->name == rhs.name && this->age == rhs.age);
    }

};