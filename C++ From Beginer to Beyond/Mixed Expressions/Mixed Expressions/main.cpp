//
//  main.cpp
//  Mixed Expressions
//
//  Created by Farhan Niloy on 1/4/23.
//

#include <iostream>

using namespace std;

int main(){
    int total{0};
    int num1, num2, num3;
    
    const int count{3};
    
    cout<<"Enter 3 numbers saperated by space: " <<endl;
    cin>> num1 >>num2 >>num3;
    
    total = num1+num2+num3;
    
    double avarage_value{0};
    
    avarage_value = static_cast<double>(total)/count;
    
    cout<<"Numbers Were: " <<num1 <<"," <<num2 <<"," <<num3 <<endl;
    cout<<"Sum of the numbers: " <<total <<endl;
    cout<<"Avarage of the numbers: " <<avarage_value <<endl;
    
    return 0;
}

