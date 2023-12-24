//
//  main.cpp
//  Conditional Operator
//
//  Created by Farhan Niloy on 3/4/23.
//

#include <iostream>

using namespace std;

int main (){
    int num{};
    cout<<"Enter an integer to check if it's odd or even: " ;
    cin>>num;
    
    cout<<num <<" is " <<((num%2==0)?"Even":"Odd") <<endl;
    
    int num1{}, num2{};
    cout<<"Enter two integers seperated by space: " ;
    cin>>num1 >>num2;
    
    if(num1!=num2){
        cout<<"Largest: " <<((num1>num2)? num1:num2) <<endl;
        cout<<"Smallest: " <<((num2>num1)? num1:num2) <<endl;
    } else{
        cout<<"Numbers are the same" <<endl;
    }
    return 0;
}
