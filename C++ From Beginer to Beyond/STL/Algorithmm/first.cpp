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

void find_test(){
    std::cout<<"\n=======================================\n";
    std::vector<int> vec {1,2,3,4,5};

    auto loc = std::find(std::begin(vec), std::end(vec), 5);

    if(loc != std::end(vec))
        std::cout <<"Found the number: " <<*loc <<std::endl;
    else
        std::cout <<"Couldn't find the number" <<std::endl;

    std::list<Person> players {
            {"Larry", 18},
            {"Moe", 20},
            {"Curly", 21}
    };

    auto loc1 = std::find(players.begin(), players.end(), Person{"Moe", 20});
    if (loc1 != players.end())
        std::cout<<"Found Moe" <<std::endl;
    else
        std::cout<<"Moe not found" <<std::endl;
}

void count_test() {
    std::cout<<"\n=======================================" <<std::endl;

    std::vector<int> vec {1,2,3,4,5,1,2};

    int num = std::count(vec.begin(), vec.end(), 1);
    std::cout <<num <<" occurrence found";
}

void count_if_test() {
    std::cout<<"\n===========================================\n";

    std::vector<int> vec {1,2,3,4,5,1,2,1,1000};
    int num = std::count_if(vec.begin(), vec.end(), [](int x) {return x % 2 == 0;});
    std::cout <<num <<" even numbers found" <<std::endl;
}

int main(){
//    find_test();
count_if_test();

    return 0;
}