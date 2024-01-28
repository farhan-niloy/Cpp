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

int main()
{
//    test1();
      test2();
}
