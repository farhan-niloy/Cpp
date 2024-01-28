#include <iostream>
#include <string>

template <typename T>
T min(T a, T b){
    return (a < b) ? a: b;
}

template <typename T1, typename T2>
void func(T1 a, T2 b) {
    std::cout <<a <<" "<<b <<std::endl;
}

struct Person {
    std::string name;
    int age;

    bool operator<(const Person &rhs){
        return this->age <rhs.age;
    }
};

int main() {
    Person p1 {"Curly", 50};
    Person p2 {"Moe", 30};

    Person p3 = min(p1, p2);

    std::cout<<min<int>(2,3)<<std::endl;
    std::cout<<min(2,3)<<std::endl;
    std::cout<<min('A', 'B')<<std::endl;
    std::cout<<min(2+5*8,30+7)<<std::endl;
}
