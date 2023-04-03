//
//  main.cpp
//  range based for loop
//
//  Created by Farhan Niloy on 3/4/23.
//

#include <iostream>
#include <vector>

using namespace std;

int main (){
    int scores[]{10,20,30};
    for(auto score:scores){
        cout<<score<<endl;
    }
    
    vector <double> tempretures {22.4, 55.6, 77.5, 33.6, 45.8, 58.6};
    
    double average_temp{};
    double total{};
    
    for(auto temp:tempretures)
        total +=temp;
        
    if (tempretures.size()!=0)
        average_temp =total/tempretures.size();
    cout<<"Average tempreture is: " <<average_temp <<endl;

    return 0;
}
