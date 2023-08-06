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
void local_example(int x);
void static_local_example();



int main() {

    global_example();
   
    global_example();
    
    local_example(500);
    static_local_example();
    static_local_example();
    
    
    return 0;
}

void local_example(int x){
    int num{3000};
    cout<<endl<<endl;
    cout<<"Local num is: " <<num <<" -start" <<endl;
    num = x;
    num *=500;
    cout<<"Local num is: " <<num <<" -end" <<endl;
}


void global_example(){
    cout<<"Global num is: " <<num <<" -start" <<endl;
    num *=500;
    cout<<"Global num is: " <<num <<" -end" <<endl;

}



void static_local_example(){
    static int num {2000};
    cout<<endl<<endl;
    cout<<"Static Local num is: " <<num <<" -start" <<endl;
    num +=400;
    cout<<"Static Local num is: " <<num <<" -end" <<endl;
}
