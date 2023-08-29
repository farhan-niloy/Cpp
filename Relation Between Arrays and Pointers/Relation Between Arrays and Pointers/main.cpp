//
//  main.cpp
//  Relation Between Arrays and Pointers
//
//  Created by Farhan Niloy on 29/8/23.
//

#include <iostream>

using namespace std;


int main(int argc, const char * argv[]) {
   
    int scores[] {100, 98, 94,};
    
    cout<<"Value of score is: " <<scores <<endl;
    
    int *score_ptr{scores};
    cout<<"Value of score_ptr is: " <<score_ptr <<endl;
    
    cout<<"Arry subscript notation....................." <<endl;
    cout<<scores[0]<<endl;
    cout<<scores[1]<<endl;
    cout<<scores[2]<<endl;
    
    cout<<"Pointers subscript notation................." <<endl;
    cout<<score_ptr[0] <<endl;
    cout<<score_ptr[1] <<endl;
    cout<<score_ptr[2] <<endl;
    
    
    cout<<"Arrays using offset notation................" <<endl;
    cout<<*scores <<endl;
    cout<<*(scores+1) <<endl;
    cout<<*(scores+2) <<endl;
    
    cout<<"Pointers using offset notation.............." <<endl;
    cout<<*score_ptr <<endl;
    cout<<*(score_ptr+1) <<endl;
    cout<<*(score_ptr+2) <<endl;
    
    cout<<endl;
    
    
    return 0;
}
