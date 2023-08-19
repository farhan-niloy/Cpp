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

unsigned long long factorial(unsigned long long);

unsigned long long factorial(unsigned long long n){
   if (n==0)
       return 1;
    return n*factorial(n-1);
}

int main() {
    
    vector<int>vecFib{5,30,40};
    vector<int>vecFac{3, 8, 12, 20};
    
    
    cout<<"Printing fibonacci numbers: " <<endl;
    
    for(int i{0}; i<= vecFib.size()-1; i++){
        cout<<fibonacci(vecFib[i]) <<endl;
    }
    
    cout<< "\nPrinting factorial numbers: " <<endl;
    
    for (int i{0}; i<=vecFac.size()-1; i++) {
        cout<<factorial(vecFac[i]) <<endl;
    }
    
    
    return 0;
}
