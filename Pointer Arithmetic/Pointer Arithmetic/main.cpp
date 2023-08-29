//
//  main.cpp
//  Pointer Arithmetic
//
//  Created by Farhan Niloy on 29/8/23.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int scores [] {100,98, 94, 68, 33, -1};
    int *score_ptr{scores};
    
    while(*score_ptr!= -1) {
        cout<<*score_ptr<<endl;
        score_ptr++;
        
        cout<<endl;
    }
    
    score_ptr=scores;
    
    cout<<"\n......................" <<endl;;
    
    while(*score_ptr != -1) {
        cout<<*score_ptr++<<endl;
        cout<<endl;
    }
    
   
    
    return 0;
}
