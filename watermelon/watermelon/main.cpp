//
//  main.cpp
//  watermelon
//
//  Created by Farhan Niloy on 24/8/23.
//

#include <iostream>

using namespace std;

int killos(int a);



int main(){
    
    killos(8);
    
}

int killos(int a){
    return a%2==0 && a!=2 ? "YES" : "NO";
}
