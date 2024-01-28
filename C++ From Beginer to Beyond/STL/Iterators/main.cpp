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
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
