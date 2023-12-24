#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout<<left <<"Student";
    cout<<right <<setw(10) <<"courses" <<endl;

    cout<<left <<"10";
    cout<<right <<setw(10) <<"5" <<endl;

    cout<<left <<"40";
    cout<<right <<setw(10) <<"6";
    return 0;
}
