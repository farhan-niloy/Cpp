//
//  main.cpp
//  Syntax for declaring pointer varriable
//
//  Created by Farhan Niloy on 22/8/23.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int num {10};
    
    cout<<"The value of num is: " <<num <<endl;
    cout<<"The sizeof num is: " <<sizeof num <<endl;
    cout<<"The adressof num is: " <<&num <<endl <<endl;
    
    int *p;
    
    cout<<"The value of num is: " <<p <<endl;
    cout<<"The sizeof num is: " <<sizeof p <<endl;
    cout<<"The adressof num is: " <<&p <<endl <<endl;
    
    p = nullptr;
    
    cout<<"The value of num is: " <<p <<endl;
    cout<<"The sizeof num is: " <<sizeof p <<endl;
    cout<<"The adressof num is: " <<&p <<endl <<endl;
    
    return 0;
}
