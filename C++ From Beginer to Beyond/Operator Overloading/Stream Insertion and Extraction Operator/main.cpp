#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {
    Mystring larry{"Larry"};
    Mystring moe{"Moe"};
    Mystring curly;
    Mystring hello;

    cout << "Enter the third stooge's first name: ";
    cin >> curly;

    cout << "Three stooges are " << larry << ", " << curly << ", and " << moe << endl;

    cout<<"Enter three stooges name seperated by space ";
    cin >> larry >> moe >> curly;

    cout << "Three stooges are " << larry << ", " << moe << ", and " << curly << endl;
    return 0;
}
