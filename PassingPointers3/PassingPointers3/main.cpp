//
//  main.cpp
//  PassingPointers3
//
//  Created by Farhan Niloy on 8/9/23.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void display (vector<string> *v){
    
    for(auto str: *v)
        cout<<str<<endl;
}

int main(int argc, const char * argv[]){
    
    vector<string>stooges {
        "Larry, " "Curly, " "Moe"
    };
    
    display(&stooges);
    
    return 0;
}
