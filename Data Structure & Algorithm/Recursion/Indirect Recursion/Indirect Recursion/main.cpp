//
//  main.cpp
//  Indirect Recursion
//
//  Created by Niloy Farhan on 27/2/24.
//

#include <iostream>

void B(int n);

void A(int n) {
    if(n>0){
        std::cout<<n <<" ";
        B(n-1);
    }
}

void B(int n) {
    if(n>1){
        std::cout<<n <<" ";
        A(n/2);
    }
}

int main(int argc, const char * argv[]) {
    A(20);
    
    return 0;
}
