//
//  main.cpp
//  USD Program
//
//  Created by Farhan Niloy on 2/4/23.
//

#include <iostream>

using namespace std;

int  main(){
    
    int usr_input_cent{};
    
    cout<<"Enter an integer representing cent: " <<endl;
    cin>>usr_input_cent;
    
    int adollar{100}, aquatar{25}, adime{10}, anickel{5}, apenny{1};
    
    int blance{}, dime{}, nickel{}, dollar{}, quatar{}, penny{};
    
    dollar = usr_input_cent/adollar;
    blance = usr_input_cent%adollar;
    
    
    quatar = blance/aquatar;
    blance = usr_input_cent%aquatar;
    
    dime = blance/adime;
    blance =  usr_input_cent%adime;
    
    nickel = blance/anickel;
    blance = usr_input_cent%anickel;
    
    penny = blance/apenny;
    blance = usr_input_cent%apenny;
    
    cout<<"dollar "<<dollar <<endl;
    cout<<"quatar "<<quatar<<endl;
    cout<<"dime "<<dime<<endl;
    cout<<"nickel  "<<nickel<<endl;
    cout<<"penny "<<penny<<endl;
    
    return 0;
}
