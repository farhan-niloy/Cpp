#include <iostream>
#include <memory>
#include <vector>

int main() {
    std::shared_ptr<int> p1 {new int{100}};
    std::cout<<p1.use_count() <<std::endl;

    std::shared_ptr<int> p2 {p1};
    std::cout<<p1.use_count() <<std::endl;

    p1.reset();
    std::cout<<p1.use_count() <<std::endl;
    std::cout<<p2.use_count() <<std::endl;

    std::vector<std::shared_ptr<int>> vec;

    std::shared_ptr<int> ptr{new int{100}};
    vec.push_back(ptr);

    std::cout<<ptr.use_count() <<std::endl;

    std::shared_ptr<int>pp1 = std::make_shared<int>(100);
    std::shared_ptr<int> pp2{pp1};
    std::shared_ptr<int> pp3;
    pp3=pp1;

    return 0;
}
