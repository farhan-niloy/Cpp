#include <iostream>
#include <ctime>

using namespace std;

int main() {

    long elapsed_seconds = time(nullptr);
    srand(elapsed_seconds);

    cout<<elapsed_seconds%6;

    return 0;
}