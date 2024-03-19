//
//  main.cpp
//  Nested Recursion
//
//  Created by Niloy Farhan on 27/2/24.
//

#include <iostream>

int fun(int n) {
    if(n > 110)
        return n - 10;
    else
        return fun(fun (n+11));
}

int main(int argc, const char * argv[]) {
    int r;
    r=fun(12);
    std::cout<< r <<std::endl;
    
    return 0;
}
