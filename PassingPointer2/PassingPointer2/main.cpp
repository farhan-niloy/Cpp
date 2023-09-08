//
//  main.cpp
//  PassingPointer2
//
//  Created by Farhan Niloy on 8/9/23.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void swap (int *a, int *b) {
    int temp = *a;
    *a=*b;
    *b=temp;
}

int main() {
    
    int x{100}, y{200};
    
    cout<<"Before Swapping" <<endl;
    cout<<"x " <<x <<endl;
    cout<< "y " <<y <<endl;
    
    cout<<"After Swapping" <<endl;
    swap(&x, &y);
    cout<<"x " <<x <<endl;
    cout<<"y " <<y <<endl;
    
    
    return 0;
}
