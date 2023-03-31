//
//  main.cpp
//  Farhan's Carpet Cleaning Service
//
//  Created by Farhan Niloy on 31/3/23.
//

#include <iostream>

using namespace std;

int main() {
    cout<<"Hello, Welcome to Farhans Car Cleaning Service" <<endl;
    cout<<"\nHow many cars would you like cleaned? "<<endl;
    
    int number_of_car{0};
    cin>>number_of_car;
    
    const double price_per_car {50.0};
    const double sales_tax {0.05};
    const int estimate_expiry {30}; //days
    
    cout<<"Number of car: " <<number_of_car <<endl;
    cout<<"Price per car: " << price_per_car <<endl;
    cout<<"Cost: " <<number_of_car*price_per_car <<endl;
    cout<<"Tax: " <<number_of_car*price_per_car*sales_tax <<endl;
    cout<<"======================================"<<endl;
    cout<<"Total estimate cost: " <<number_of_car*price_per_car+number_of_car*price_per_car*sales_tax<<endl;
    cout<<"This estimate is valid for " <<estimate_expiry <<" days only" <<endl;
    
    return 0;
    
}
