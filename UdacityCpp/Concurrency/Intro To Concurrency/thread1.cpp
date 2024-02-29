#include <iostream>
#include <thread>

//void test(int x) {
//    std::cout <<"Hello from thread!" <<std::endl;
//    std::cout <<"Argument passed in: " <<x <<std::endl;
//}

int main() {

    //With Lamda
    auto lamda=[](int x){
        std::cout<<"Hello from thread" <<std::endl;
        std::cout<<"Argument passed in: " <<x <<std::endl;
    };

    std::thread myThread(lamda, 1000);
    myThread.join();

    std::cout<<"Hello from my main thread" <<std::endl;

    return 0;
}