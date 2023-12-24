#include <iostream>
using namespace std;

int main() {
    int a{15};
    int b{18};
    int x;

    x = a;
    a = b;
    b = x;

    cout<<"Value of a is: " <<a <<" Value of b is: " <<b;

    return 0;
}
