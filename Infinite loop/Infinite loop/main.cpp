//
//  main.cpp
//  Infinite loop
//
//  Created by Farhan Niloy on 4/4/23.
//

#include <iostream>

using namespace std;

int main (){
    for (;;)
        cout<<"This will continue forever" <<endl;
    
    while (true)
        cout<<"This will continue forever" <<endl;
    
    
    do {
        cout<<"This will continue forever";
    } while (true);
    
    
    return 0;
}
