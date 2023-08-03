//
//  main.cpp
//  FunctionParameters
//
//  Created by Farhan Niloy on 3/8/23.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;


void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_vlue3(vector <string> vv);
void print_vector(vector <string> vv);

void pass_by_value1 (int num) {
    num = 1000;
}

void pass_by_value2 (string s){
    s = "changed";
}

void pass_by_value3 (vector <string> vv){
    vv.clear();
}

void print_vector (vector <string> vv ) {
    for (auto s:vv)
        cout <<s <<" ";
    cout<<endl;
}

int main() {
    int num = 10;
    int another_num = 200;
    string ss = "Omi";
    
    vector <string> xyz {"farhan", "omi", "niloy", "mubassira"};
    
    cout<<"num before calling pass_by_value1 " <<num <<endl;
    pass_by_value1(num);
    cout<<"num after calling pass_by_value1 " <<num <<endl;
    
    cout <<"another_num before calling pass_by_value1 " <<another_num <<endl;
    pass_by_value1(another_num);
    cout<<"num after calling pass_by_value1 "  <<another_num <<endl;
    
    
    cout<<"string before calling pass_by_value2 " <<ss <<endl;
    pass_by_value2(ss);
    cout<<"string after calling pass_by_value2 " <<ss <<endl;
    
    print_vector(vv);
    pass_by_vlue3(vv);
    print_vector(vv);


    
    
   
        
    return 0;
}
