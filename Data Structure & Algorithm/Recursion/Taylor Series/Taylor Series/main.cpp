//
//  main.cpp
//  Taylor Series
//
//  Created by Niloy Farhan on 28/2/24.
//

#include <iostream>

double e(int x, int n) {
    static double p=1, f=1;
    double r;
    if(n==0)
        return 1;
    r=e(x, n-1);
    p=p*x;
    f=f*n;
    return r+p/f;
}

int main(int argc, const char * argv[]) {
    std::cout<<e(2,10);
    return 0;
}
