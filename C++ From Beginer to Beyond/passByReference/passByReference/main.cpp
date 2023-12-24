//
//  main.cpp
//  passByReference
//
//  Created by Farhan Niloy on 6/8/23.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void pass_by_ref1(int &n);
void pass_by_ref2(string &s);
void pass_by_ref3(vector<string> &v);
void print_vec(const vector<string> &v);

void pass_by_ref1(int &n){
    n=1000;
};

void pass_by_ref2(string &s) {
    s = "Many Many Dollars Needed";
}

void pass_by_ref3(vector<string> &v){
    v.clear();
}

void print_vec(const vector<string> &v) {
    for (auto s:v)
        cout<<s<<" ";
    cout<<endl;
}

int main(){
    int n{100};
    string s{"Dollar"};
    vector<string> stooges {"larry", "curly", "moe"};
    
    cout<<"without calling pass_by_ref1: " <<n <<endl;;
    pass_by_ref1(n);
    cout<<"calling using pass_by_ref1: " <<n;
    cout<<endl <<endl;
    
    
    cout<<"without calling pass_by_ref2: " <<s <<endl;
    pass_by_ref2(s);
    cout<<"calling with pass_by_ref2: " <<s <<endl;
    cout<<endl <<endl;
    
    
    cout<<"calling with print_vec: ";
    print_vec(stooges);

    

    pass_by_ref3(stooges);
    cout<<"calling with print_by_ref3: ";
    print_vec(stooges);
    
    cout<<endl<<endl;
    
    
    
    return 0;
}
