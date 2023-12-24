//
//  main.cpp
//  switch
//
//  Created by Farhan Niloy on 3/4/23.
//

#include <iostream>
using namespace std;

int main(){
    char grade{};
    cout<<"Enter A grade to know about it: " <<endl;
    cin>>grade;
    
    switch (grade) {
        case 'a':
        case 'A':
            cout<<"You need 90 or above go and study! " <<endl;
            break;
        case 'b':
        case 'B':
            cout<<"You need 80-89, study hard! " <<endl;
            break;
            
        case 'C':
        case 'c':
            cout<<"You need 70-79, preety avarage grade" <<endl;
            break;
            
        case'd':
        case 'D':
            cout<<"You need only 60-69, no need to study! " <<endl;
            break;
            
        case 'f':
        case 'F':
        {
            char confirm{};
            cout<<"Are you sure you want an F (Y/N)"  <<endl;
            cin>> confirm;
            
            if(confirm=='n'&&'N')
                cout<<"Good! go and aim for higher grades!"<<endl;
            else if (confirm=='y'&&'Y')
                cout<<"I guess you're just a punk!" <<endl;
                
            
            break;
            
        }
            
            
        default:
            cout<<"Invalid grade!!!" <<endl;
    }
    
    return 0;
}
