//
//  main.cpp
//  Pointer Arithmetic
//
//  Created by Farhan Niloy on 29/8/23.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int scores [] {100,98, 94, 68, 33, -1};
    int *score_ptr{scores};
    
    while(*score_ptr!= -1) {
        cout<<*score_ptr<<endl;
        score_ptr++;
        
        cout<<endl;
    }
    
    score_ptr=scores;
    
    cout<<"\n......................" <<endl;;
    
    while(*score_ptr != -1) {
        cout<<*score_ptr++<<endl;
        cout<<endl;
    }
    
    cout<<"\n........................." <<endl;
    
    string s1 {"Farhan"};
    string s2 {"Niloy"};
    string s3 {"Farhan"};
    
    string *p1 {&s1};
    string *p2 {&s2};
    string *p3 {&s1};
    
    cout<<boolalpha;
    cout<<p1 <<" == " <<p2 <<": " <<(p1==p2) <<endl;
    cout<<p1 <<" == " <<p3 <<": " <<(p1==p3) <<endl;
    cout<<endl;
    
    cout<<*p1 <<" == " <<*p2 <<": " <<(*p1==*p2) <<endl;
    cout<<*p1 <<" == " <<p3 <<": " <<(*p1==*p3) <<endl;
    cout<<endl;
    
    p3=&s3;
    cout<<*p1 <<" == " <<*p3 <<": " <<(*p1==*p3) <<endl;
    
    
    

    
    
    return 0;
}
