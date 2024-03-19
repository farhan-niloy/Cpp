//
//  main.cpp
//  Exponent
//
//  Created by Niloy Farhan on 27/2/24.
//

#include <iostream>

int pow(int m, int n) {
    if(n==0)
        return 1;
    return pow(m, n-1) * m;
}

// More Efficient 2^8 = (2^2)^4
int pow2(int m, int n) {
    if(n==0)
        return(1);
    if(n%2 == 0)
        return pow2(m*m, n/2);
    return m*pow2(m*m, n/2);
    
}

int main(int argc, const char * argv[]) {
    std::cout<<pow(4, 5) <<std::endl;;
    std::cout<<pow(4, 5) <<std::endl;
    return 0;
}
