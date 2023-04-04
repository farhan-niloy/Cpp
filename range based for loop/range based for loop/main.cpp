//
//  main.cpp
//  range based for loop
//
//  Created by Farhan Niloy on 3/4/23.
//

#include <iostream>
#include <vector>
#include <iomanip>

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
    cout<<fixed <<setprecision(1);
    cout<<"Average tempreture is: " <<average_temp <<endl;
    
    for (auto val:{1,2,3,4,5})
        cout<<val<<endl;
        
    for(auto c:"I love you")
        if(c == 'l'){
            cout<<'h';
        } else if(c== 'o'){
            cout<<'a';
        } else if(c=='v'){
            cout<<'t';
        } else {
            cout<<c;
        }
           
        
    

    return 0;
}
