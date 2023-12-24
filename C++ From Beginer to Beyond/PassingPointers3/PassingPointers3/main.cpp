////
////  main.cpp
////  PassingPointers3
////
////  Created by Farhan Niloy on 8/9/23.
////
//
#include <iostream>
#include <vector>
#include <string>

using namespace std;
//
//void display (vector<string> *const v){
//   // (*v).at(0)="Funny";
//
//    for(auto str: *v)
//        cout<<str<<endl;
//}
//
//int main(int argc, const char * argv[]){
//
//    vector<string>stooges {
//        "Larry, " "Curly, " "Moe"
//    };
//
//    display(&stooges);
//
//    return 0;
//}


void display (int *arry, int sentinel) {
    while(*arry != sentinel) {
        cout<<*arry++ <<" ";
        cout<<endl;
    }
}


int main () {
    
    int scores[] {100, 98, 97, 79, 85, -1};
    display(scores, -1);
    
    cout<<endl;
    
    return 0;
}
