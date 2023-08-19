//
//  main.cpp
//  Recursive Functions
//
//  Created by Farhan Niloy on 19/8/23.
//

#include <iostream>
#include <vector>

using namespace std;

unsigned long long fibonacci(unsigned long long);

unsigned long long fibonacci(unsigned long long n){
    if(n<=1)
        return n;
    
    return fibonacci(n-1)+fibonacci(n-2);
}

int main() {
    
    vector<int>vec{5,30,40};
    
    for(int i{0}; i<= vec.size()-1; i++){
        cout<<fibonacci(vec[i]) <<endl;
    }
    
    
    return 0;
}
