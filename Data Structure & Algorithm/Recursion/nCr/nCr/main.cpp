//
//  main.cpp
//  nCr
//
//  Created by Niloy Farhan on 5/3/24.
//

#include <iostream>

int fact(int n) {
    if(n==0) return 1;
    return fact(n-1)*n;
}

int nCr(int n, int r) {
    
    int num, den;
    
    num=fact(n);
    den=fact(r)*fact(n-r);
    
    return num/den;
}

int NCR(int n, int r) {
    if(n==r || r==0)
        return 1;
    return NCR(n-1, r-1)+NCR(n-1, r);
}

int main(int argc, const char * argv[]) {
    
    std::cout<<"Using formula: " <<nCr(5, 3) <<std::endl;
    std::cout<<"Using recursion: " <<NCR(5, 3) <<std::endl;
    
    
    return 0;
}
