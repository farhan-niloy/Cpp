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

std::ostream &operator <<(std::ostream &os, const Person &p){
    os <<p.name;
    return os;
}

int main() {
    Person p1 {"Curly", 50};
    Person p2 {"Moe", 30};
    func(p1, p2);

    Person p3 = min(p1, p2);
    std::cout<<p3.name <<" is younger" <<std::endl;


    std::cout<<min<int>(2,3)<<std::endl;
    std::cout<<min(2,3)<<std::endl;
    std::cout<<min('A', 'B')<<std::endl;
    std::cout<<min(2+5*8,30+7)<<std::endl;

    func<int, int>(10,20);
    func<char, double>('C', 12.4);
    func('A',2.0);
    func(1000,"Testing");
    func(2000,std::string{"Farhan"});
}
