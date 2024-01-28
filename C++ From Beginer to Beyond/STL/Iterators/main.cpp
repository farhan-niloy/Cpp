#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>

void display(const std::vector<int> &vec){
    std::cout<<"[ ";
    for(auto &i:vec){
        std::cout <<i <<' ';
    }
    std::cout<< "] " <<std::endl;
}

 void test1() {
    std::cout<<"\n============================================\n";
    std::vector<int> num1 {1,2,3,4,5};
    auto it = num1.begin();
    std::cout <<*it <<std::endl;

    it++;
    std::cout <<*it <<std::endl;

    it += 2;
    std::cout <<*it <<std::endl;

    it -= 2;
    std::cout <<*it <<std::endl;

    it = num1.end() - 1;
    std::cout <<*it <<std::endl;

}

void test2() {
    std::cout<<"\n============================================\n";

    std::vector<int> num1 {1,2,3,4,5};

    std::vector<int>::iterator  it = num1.begin();
    while (it != num1.end()){
        std::cout<<*it <<std::endl;
        it++;
    }

    it = num1.begin();
    while (it != num1.end()){
        *it = 0;
        it++;
    }
    display(num1);
}

void test3(){
    std::cout<<"\n============================================\n";
    std::vector<int>num1{1,2,3,4,5};

    std::vector<int>::const_iterator it1 = num1.begin();

    while(it1 != num1.end()){
        std::cout<<*it1 <<std::endl;
        it1++;
    }
    it1 = num1.begin();
    while(it1 != num1.end()){
//      *it1 = 0; //compiler err - read only
        it1++;
    }
}

void test4() {

    std::vector<int> vec{1, 2, 3, 4, 5};

    auto t1 = vec.rbegin(); //reverse iterator oer vector
    while (t1 != vec.rend()) {
        std::cout << *t1 << std::endl;
        t1++;
    }

//const reverse iterator over a list
    std::list<std::string> name{"Larry", "Moe", "Curly"};
    auto it2 = name.crbegin(); //iterator over a list of string cr = constant reverse iterator
    std::cout << *it2 << std::endl;
    it2++;
    std::cout << *it2 << std::endl;



//iterator over map
    std::map<std::string, std::string> favorites{
            {"Farhan", "C++"},
            {"Gin",    "Tama"},
            {"Hello",  "World"}
    };

    auto it3 = favorites.begin();
    while (it3 != favorites.end()) {
        std::cout << it3->first << " : " << it3->second << std::endl;
        it3++;
    }

}

int main()
{
//    test1();
//    test2();
//    test3();
      test4();

}
