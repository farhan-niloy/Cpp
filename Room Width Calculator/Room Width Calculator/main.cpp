//
//  main.cpp
//  Room Width Calculator
//
//  Created by Farhan Niloy on 31/3/23.
//

#include <iostream>

using namespace std;

int main(){
    int room_length{0};
    int room_width{0};
    
    cout<<"Enter room length: " <<endl;
    cin>>room_length;
    
    cout<<"Enter room width: " <<endl;
    cin>>room_width;
    
    cout<<"The area of room is: " <<room_width * room_length <<" square meter" <<endl;
    
    return 0;
    
}
