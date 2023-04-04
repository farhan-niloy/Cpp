//
//  main.cpp
//  While Loop
//
//  Created by Farhan Niloy on 4/4/23.
//

#include <iostream>

using namespace std;

int main (){
    
//    int num{};
//    cout<<"Enter a positive integer - start the countdown:";
//    cin>>num;
//
//    while(num>0){
//        cout<<num<<endl;
//        --num;
//    }
//
//    int num1{};
//    cout<<"Enter a positive integer to -start countup: ";
//    cin>>num1;
//
//    int i{1};
//    while(num1>i){
//        cout<<i <<endl;
//        i++;
//
//    }
//
    int num{10}, num1{20};
    
    int i{1};
    
    for(i={1}; i<=num; i++ ) {
        cout<<i <<" \n";
        
        cout<<" * " <<num1;
    }
    
    return 0;
}
