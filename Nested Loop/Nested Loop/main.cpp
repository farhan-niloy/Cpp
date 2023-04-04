//
//  main.cpp
//  Nested Loop
//
//  Created by Farhan Niloy on 4/4/23.
//

#include <iostream>

using namespace std;

int main(){
    
    for (int num{1}; num<=10; num++){
        
        for(int num2{2}; num2<=10; num2++){
            cout<<num <<" * " << num2 <<"=" <<num*num2 <<endl;
            
        }
        
        cout<<"==================================" <<endl;
    }
    cout<<endl;
    return 0;
}
