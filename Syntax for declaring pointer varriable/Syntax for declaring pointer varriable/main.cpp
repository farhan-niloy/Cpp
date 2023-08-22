//
//  main.cpp
//  Syntax for declaring pointer varriable
//
//  Created by Farhan Niloy on 22/8/23.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int num {10};
    
    cout<<"The value of num is: " <<num <<endl;
    cout<<"The sizeof num is: " <<sizeof num <<endl;
    cout<<"The adressof num is: " <<&num <<endl <<endl;
    
    int *p;
    
    cout<<"The value of num is: " <<p <<endl;
    cout<<"The sizeof num is: " <<sizeof p <<endl;
    cout<<"The adressof num is: " <<&p <<endl <<endl;
    
    p = nullptr;
    
    cout<<"The value of num is: " <<p <<endl;
    cout<<"The sizeof num is: " <<sizeof p <<endl;
    cout<<"The adressof num is: " <<&p <<endl <<endl;
    
    
    int *p1 {nullptr};
    double *p2 {nullptr};
    unsigned long long *p3 {nullptr};
    vector <string> *p4 {nullptr};
    string *p5 {nullptr};
    
    cout<<"\nsize of p1 is: " <<sizeof p1 <<endl;
    cout<<"\nsize of p2 is: " <<sizeof p2 <<endl;
    cout<<"\nsize of p3 is: " <<sizeof p3 <<endl;
    cout<<"\nsize of p4 is: " <<sizeof p4 <<endl;
    cout<<"\nsize of p5 is: " <<sizeof p5 <<endl <<endl;
    
    
    int score{10};
    double high_temp{100.4};
    
    int *score_ptr{nullptr};
    
    score_ptr = &score;
    
    cout<<"Value of score is: " <<score <<endl;
    cout<<"Sizeof score is: " <<sizeof score <<endl;
    cout<<"value of score_ptr is:" <<score_ptr <<endl;
    
    
        
    
    return 0;
}
