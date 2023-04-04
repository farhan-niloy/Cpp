//
//  main.cpp
//  Do While Loop
//Meanu driven application
//  Created by Farhan Niloy on 4/4/23.
//

#include <iostream>

using namespace std;

int main (){
    
    char selection{};
    
    do{
        cout<<"\n----------------------" <<endl;
        cout<<"1. Do this" <<endl;
        cout<<"2. Do that" <<endl;
        cout<<"3. Do something else" <<endl;
        cout<<"Q. Quit" <<endl;
        cout<<"\n Enter your selection: ";
        cin>>selection;
        
        switch (selection) {
            case '1':
                cout<<"You choose 1 - doing this" <<endl <<endl <<endl;
                break;
            case '2':
                cout<<"You choose 2 - doing that" <<endl <<endl <<endl;
                break;
            case '3':
                cout<<"You choose 3 - doing something else" <<endl <<endl <<endl;
                break;
            default :
                cout<<"Unknown! Selection...." <<endl;
                break;
        }
        
        
    } while (selection != 'q' && selection!='Q');
    
    cout<<endl;
    return 0;
}
