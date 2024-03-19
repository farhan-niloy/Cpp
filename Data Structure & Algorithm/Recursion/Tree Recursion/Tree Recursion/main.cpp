//
//  main.cpp
//  Tree Recursion
//
//  Created by Niloy Farhan on 25/2/24.
//

#include <iostream>

void fun(int n) {
    if(n>0) {
        std::cout<< n <<" ";
        fun(n - 1 );
        fun(n - 1 );
        fun(n - 1);
    }
}

int main(int argc, const char * argv[]) {
    fun(4);
    std::cout<< std::endl;
    return 0;
}
