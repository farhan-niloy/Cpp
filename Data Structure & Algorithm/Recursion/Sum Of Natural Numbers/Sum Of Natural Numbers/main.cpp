//
//  main.cpp
//  Sum Of Natural Numbers
//
//  Created by Niloy Farhan on 27/2/24.
//

#include <iostream>

int sum3(int n);

int sum2(int n);

//Order of Time O(n), Order of Space(n+1)
int sum(int n) {
    if (n == 0 )
        return 0;
    return sum(n-1)+n;
}

int main(int argc, const char * argv[]) {
    
//    std::cout<<sum(3) <<" ";
//    std::cout<<sum2(3) <<" ";
    std::cout<<sum3(3) <<" ";
    
    return 0;
}

//Order of 1 O(1) complexity
int sum2(int n) {
    return n*(n+1)/2;
}

//Order of n O(n) complexity
int sum3(int n) {
    int s{0};
    for(int i = 1; i<=n; i++)
        s+=i;
    return s;
}
