#include <iostream>
#include <algorithm>
#include <thread>
#include <chrono>

using namespace std;
using namespace std::chrono;
typedef unsigned long long ull;

ull OddSum = 0;
ull EvenSum = 0;

void findEven(ull start, ull end) {
    for (ull i = start; i <= end; i++)
        if ((i&1) == 0)
            EvenSum += 1;
}

void findOdd(ull start, ull end) {
    for (ull i = start; i <= end; i++)
        if ((i&1) != 0) {
            OddSum += 1;
        }
}

int main() {

    ull start = 0, end = 1900000000;
    
    auto startTime = high_resolution_clock::now();

    std::thread t1(findOdd, start, end);
    std::thread t2(findEven, start, end);
    t1.join();
    t2.join();

    //findOdd(start, end);
    //findEven(start, end);

    auto endTime = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(endTime - startTime);

    cout << "OddSum :" << OddSum << endl;
    cout << "EvenSum :" << EvenSum << endl;
    cout<< duration.count()/1000000 <<endl;

    return 0;
}

