//
//  main.cpp
//  While Loop
//
//  Created by Farhan Niloy on 4/4/23.
//

#include <iostream>

using namespace std;

int main (){
    
    int num{};
    cout<<"Enter a positive integer - start the countdown:";
    cin>>num;

    while(num>0){
        cout<<num<<endl;
        --num;
    }

    int num1{};
    cout<<"Enter a positive integer to -start countup: ";
    cin>>num1;

    int i{1};
    while(num1>i){
        cout<<i <<endl;
        i++;

    }

//    int numx{10}, numy{20};
//
//    int iz{1};
//
//    for(iz={1}; iz<=numx; i++ ) {
//        cout<<iz <<" \n";
//
//        cout<<" * " <<numy;
//    }
    
    int number{};
    cout<<"Enter an integer less than 100: ";
    cin>>number;
    
    while(number>=100){
        cout<<"Enter an integer less than 100: ";
        cin>>number;
    }
    
    
    
    
    
    return 0;
}
