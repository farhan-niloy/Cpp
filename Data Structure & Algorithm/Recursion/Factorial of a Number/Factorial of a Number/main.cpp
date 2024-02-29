//
//  main.cpp
//  Factorial of a Number
//
//  Created by Niloy Farhan on 27/2/24.
//

#include <iostream>

int fact(int n) {
    if(n==0)
        return 1;
    return fact(n - 1) * n;
}

//with loop
int fact2(int n) {
    return n*(n-1)*n/2;
}

int main(int argc, const char * argv[]) {
    std::cout<<fact(4) <<std::endl;;
    std::cout<<fact2(4) <<std::endl;
    return 0;
}
