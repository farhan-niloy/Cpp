//
//  main.cpp
//  Static Global
//
//  Created by Niloy Farhan on 25/2/24.
//

#include <iostream>



int fun(int n) {
    static int x=0;
    if(n>0) {
        x++;
        return fun(n-1)+x;
    }
    return 0;
}

int main(int argc, const char * argv[]) {
    
    int r;
    r = fun(5);
    std::cout<< r <<std::endl;
    
    return 0;
}
