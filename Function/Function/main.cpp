//
//  main.cpp
//  Function
//
//  Created by Farhan Niloy on 28/6/23.
//

#include <iostream>
#include <cmath> //required

using namespace std;

int main (){
    
    double num{};
    
    cout<<"Enter a number (double): ";
    cin>>num;
    
    cout<<"The sqrt of " <<num <<" is: " <<sqrt(num) <<endl;
    cout<<"The cubed root of " <<num <<" is: " <<cbrt(num) <<endl;
    
    cout<<"The sine of " <<num <<" is: " <<sin(num) <<endl;
    cout<<"the cosine of " <<num <<" is: " <<cos(num) <<endl;
    
    cout<<"The sile of " <<num <<" is: " <<ceil(num) <<endl;
    cout<<"The floor of " <<num <<" is: " <<floor(num) <<endl;
    cout<<"The round of " <<num <<" is: " <<round(num) <<endl;
    
    double power {};
    cout<<"Enter a power to raise" << num <<" to:" <<endl;
    cin>>power;
    cout<<num <<"raised to the " <<power << " power is: " <<pow(num, power) <<endl;
    
    cout<<8endl;
 


    return 0;
}
