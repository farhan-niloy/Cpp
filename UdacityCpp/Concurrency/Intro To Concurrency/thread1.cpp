#include <iostream>
#include <thread>

void test(int x) {
    std::cout <<"Hello from thread!" <<std::endl;
    std::cout <<"Argument passed in: " <<x <<std::endl;
}

int main() {

    std::thread myThread(&test, 1000);

    std::cout<<"Hello from my main thread" <<std::endl;

    return 0;
}