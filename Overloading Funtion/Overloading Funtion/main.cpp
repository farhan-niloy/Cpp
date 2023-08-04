//
//  main.cpp
//  Overloading Funtion
//
//  Created by Farhan Niloy on 4/8/23.
//

#include <iostream>

using namespace std;

void print(int);
void print(double);
void print(string);
void print(vector<string>);


void print(int x){
    cout<<"Printing int: " <<x <<endl;
};

void print (double x) {
    cout<<"Printing double: " <<x <<endl;
}

void print (string x) {
    cout<<"Printing string: " <<x <<endl;
}

void print (vector<string> x){
    cout<<"Printing Vector: " ;
    for (auto y:x)
        cout<< y+" " <<endl;
}

int main() {
    
    print(500);
    
    print(5.000555);
    
    print(" Hello, World!"); //C-style String is converted to a C++ String
    
    string s {"Hello, World!"}; //C++ String;
    print(s);
    
    vector<string> niloyOmi {"Niloy Farhan + ", "Omi Farhan"};
    
    print(niloyOmi);
    

    
  
    
    return 0;
}
