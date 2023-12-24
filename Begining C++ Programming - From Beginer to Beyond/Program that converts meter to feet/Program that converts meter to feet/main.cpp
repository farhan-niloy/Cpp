//
//  main.cpp
//  Program that converts meter to feet
//
//  Created by Farhan Niloy on 1/4/23.
//

#include <iostream>

using namespace std;

int main(){
    double meter{};
    const double one_meter{1.000000000000000};
    const double one_feet{3.28084};
    cout<<"Enter meter to convert it into feet: " <<endl;
    
    cin>>meter;
    
    double meter_to_feet = one_feet/one_meter*meter;
    
    cout<<meter <<" in feet is " <<meter_to_feet <<endl;
    
    return 0;
}
