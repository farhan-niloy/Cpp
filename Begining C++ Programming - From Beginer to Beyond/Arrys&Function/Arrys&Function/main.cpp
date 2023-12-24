//
//  main.cpp
//  Arrys&Function
//
//  Created by Farhan Niloy on 6/8/23.
//

#include <iostream>

using namespace std;

void print_arry(int arry[], size_t size);
void set_arry(int arry[], size_t size, int value);

int main() {
    
    int scores[] {100, 300, 500, 600, 90, 50};
    
    print_arry(scores, 5);
    set_arry(scores, 5, 100);
    
    print_arry(scores, 5);
    
    
    
   
    return 0;
}


void print_arry(int arry[], size_t size) {
    for(size_t i{0}; i<size; i++)
        cout<<arry[i] <<endl;
};

void set_arry(int arry[], size_t size, int value) {
    for(size_t i{0}; i<size; i++)
        arry[i]=value;
}
