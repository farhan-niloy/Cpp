//
//  main.cpp
//  Section 11 Challenge
//
//  Created by Farhan Niloy on 19/8/23.
//

#include <iostream>
#include <vector>

using namespace std;

void print_numbers(string s);





int main() {
    
    vector<int> nubers{};
    char selection{};
    
    do {
        
        cout<<"P - Print Numbers: " <<endl;
        cout<<"A - Add Numbers: " <<endl;
        cout<<"M - Calculate the mean of the numbers: " <<endl;
        cout<<"S - The smallest number: " <<endl;
        cout<<"L - The largest number: " <<endl;
        cout<<"-----------------------" <<endl;
        
        cin>>selection;
        
    } while ( selection != 'q' && selection !='Q');
    
    return 0;
}

void print_nubmers(int num){
        for(auto num:numbers)
            cout<<num;
        };
