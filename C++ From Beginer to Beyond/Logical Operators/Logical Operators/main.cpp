//
//  main.cpp
//  Logical Operators
//
//  Created by Farhan Niloy on 1/4/23.
//

#include <iostream>

using namespace std;

int main(){
    
    //if the number is within the boundries only then true(1)
    int usr_input;
    int upper{10}, lower{20};
    
    cout<<"Enter an integer - the bounds are " <<upper <<" & " <<lower <<endl;
    
    cin>>usr_input;
    
    bool within_bounds{true};
    
    within_bounds = usr_input>upper && usr_input<lower; cout<<endl;
    
    cout<<"The input was " <<usr_input <<" and that's " <<within_bounds <<endl;
    
    //if the number is outside boundries only then true(1)
    int usr_input2;
    int bound1{15}, bound2{30};
    
    cout<<"Enter any integer outside " <<bound1 <<" & " <<bound2 <<endl;
    cin>>usr_input2;
    
    bool outside_bounds{false};
    
    outside_bounds = usr_input2<bound1 || usr_input2>bound2;
    
    cout<<"The input was " <<usr_input2 <<" and that's " <<outside_bounds <<endl;
    
    //if the number entered is exactly on the boundries only then true(1)
    int user_input3;
    int boundx{20}, boundy{50};
    
    cout<<"enter " <<boundx <<" or " <<boundy <<endl;
    cin>>user_input3;
    
    bool exact_boundries{true};
    
    exact_boundries = boundx==user_input3 || boundy==user_input3;
    
    cout<<"The entered value is: " <<exact_boundries <<endl;
    
    return 0;
     
}
