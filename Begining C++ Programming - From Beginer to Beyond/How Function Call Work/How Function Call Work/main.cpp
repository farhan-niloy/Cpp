//
//  main.cpp
//  How Function Call Work
//
//  Created by Farhan Niloy on 6/8/23.
//

#include <iostream>

using namespace std;

void func2(int &z, int a, int b){
    z+= a+b;
}

int func1(int x, int y){
    int result{};
    result=x+y;
    func2(result, x, y);
    return result;
}

int main() {
    int x{10};
    int y{20};
    int z{};
    
    z = func1(x, y);
    
    cout<<z <<endl;
    
    
    return 0;
}
