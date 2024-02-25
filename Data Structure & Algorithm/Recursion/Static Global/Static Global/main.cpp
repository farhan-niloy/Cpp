//
//  main.cpp
//  Static Global
//
//  Created by Niloy Farhan on 25/2/24.
//

#include <iostream>

int fun(int n) {
    if(n>0) {
        return fun(n-1)+n;
    }
    return 0;
}

int main(int argc, const char * argv[]) {
    
    int r;
    r = fun(5);
    std::cout<< r <<std::endl;
    
    return 0;
}
