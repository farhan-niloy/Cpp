//
//  main.cpp
//  RandNumFunction
//
//  Created by Farhan Niloy on 2/8/23.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int random_number {};
    size_t count{6};
    int min{1};
    int max{6};
    
    cout<<"RAND_MAX on my system is: " <<RAND_MAX <<endl;
    srand(time(nullptr));
    
    for (size_t i{1}; i<=count; i++) {
        random_number = rand()% max + min;
        cout<<random_number <<endl;
    }
    
    return 0;
}
 
