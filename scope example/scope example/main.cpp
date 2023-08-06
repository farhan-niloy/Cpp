//
//  main.cpp
//  scope example
//
//  Created by Farhan Niloy on 6/8/23.
//

#include <iostream>

using namespace std;

int num{5000};

void global_example();
void local_example();
void static_local_example();

int main() {

    global_example();
    local_example();
    static_local_example();
    
    
    return 0;
}


void global_example(){
    cout<<"Global num is: " <<num <<" -start" <<endl;
    num +=1000;
    cout<<"Global num is: " <<num <<" -end" <<endl;
    
}

void local_example(){
    int num{300};
    cout<<endl<<endl;
    cout<<"Local num is: " <<num <<" -start" <<endl;
    num *=100;
    cout<<"Local num is: " <<num <<" -end" <<endl;
}

void static_local_example(){
    static int num{5000};
    cout<<endl<<endl;
    cout<<"Static Local num is: " <<num <<" -start" <<endl;
    num *=100;
    cout<<"Static Local num is: " <<num <<" -end" <<endl;
}
