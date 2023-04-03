//
//  main.cpp
//  print a house using loops and nums
//
//  Created by Farhan Niloy on 3/4/23.
//

#include <iostream>
using namespace std;

int main (){
    for(int i{0}; i<=1000; i++){
        cout<<((i%10==0)? "                                          yyy    ":"                 nnn  ") <<"\n                                                                                                                                                         mmmmm" <<" \nxxxxx";
    }
    
    return 0;
}
