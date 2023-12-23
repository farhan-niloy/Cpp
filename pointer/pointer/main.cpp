//
//  main.cpp
//  pointer
//
//  Created by Niloy Farhan on 23/12/23.
//

#include <iostream>

using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, const char * argv[]) {
    int i{5};
    while (i>0){
        cout<<i<<endl;
        i--;
        
    }
    
    return 0;
}
