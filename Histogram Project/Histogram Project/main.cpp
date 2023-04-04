//
//  main.cpp
//  Histogram Project
//
//  Created by Farhan Niloy on 4/4/23.
//

#include <iostream>
#include <vector>

using namespace std;

int main (){
    
    int num_items{};
    cout<<"How many items do you have?";
    cin>>num_items;
    
    vector<int>data{};
    
    for(int i={1}; i<=num_items; i++) {
        int item;
        cout<<"Enter item " <<i <<": ";
        cin>>item;
        data.push_back(item);
    }
    
    for (auto val:data) {
        for (int i{1}; i<=val; i++) {
            if(i%5==0)
                cout<<"*";
            else
                cout<<"=";
        }
        cout<<endl;
    }
    
    return 0;
}
