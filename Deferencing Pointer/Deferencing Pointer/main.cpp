//
//  main.cpp
//  Deferencing Pointer
//
//  Created by Farhan Niloy on 28/8/23.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int score {100};
    int *score_ptr {&score};
    
    double high_temp {44.55};
    double low_temp {44.33};
    
    double *temp_ptr {&high_temp};
    
    string name {"Farhan"};
    string *name_ptr{&name};
    
    
    vector <string> stooges {
        "Larry", "Curly", "Moe"
    };
    
    vector <string> *vector_ptr{nullptr};
    
    vector_ptr = &stooges;
    
    
    cout<<*score_ptr <<endl;
    
    *score_ptr = 200;
    
    cout<<*score_ptr <<endl;
    cout<<score <<endl <<endl <<endl;
    
    cout<<*temp_ptr<<endl;
    temp_ptr =  &low_temp;
    cout<<*temp_ptr <<endl <<endl <<endl;
    
    cout<<*name_ptr <<endl;
    name = "Niloy";
    cout<<*name_ptr;
    cout<<endl <<endl;
    
    
    cout<<(*vector_ptr).at(0) <<endl <<endl;
    
    cout<<"Stooges: ";
    
    for (auto s: *vector_ptr) {
        cout<<s <<" ";
        
       cout <<endl;
    }
    
    
    
    
    
    

    return 0;
}
