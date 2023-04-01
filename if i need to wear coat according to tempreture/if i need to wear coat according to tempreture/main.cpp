//
//  main.cpp
//  if i need to wear coat according to tempreture
//
//  Created by Farhan Niloy on 1/4/23.
//

#include <iostream>

using namespace std;

int main(){
    bool wear_coat{false};
    int tempreture{};
    int wind_speed{};
    
    cout<<"Enter the Tempreture and Wind Speed: " <<endl;
    cin>>tempreture >>wind_speed;
    
    const int wind_speed_for_coat{25};
    const double tempreture_for_coat{45};
    
    wear_coat = tempreture<=tempreture_for_coat || wind_speed_for_coat<=wind_speed;
    
    cout<<"You need to wear a coat " <<wear_coat <<endl;
    
    return 0;
}
