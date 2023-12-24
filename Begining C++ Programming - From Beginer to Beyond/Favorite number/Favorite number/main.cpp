//
//  main.cpp
//  Favorite number
//
//  Created by Farhan Niloy on 30/3/23.
//

#include <iostream>

int main(){
    int xxx=0;
    std::cout<<"What's your favorite number from 1 to 100? " <<std::endl;
    std::cin>>xxx;
    
    if(xxx == 23){
        std::cout<<xxx <<" Is also my favorite number" <<std::endl;
    } else {
        std::cout<<"No, My favorite number is 23" <<std::endl;
    }
    
}
