//
//  main.cpp
//  Default argument and values
//
//  Created by Farhan Niloy on 4/8/23.
//

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

double calc_cost(double base_cost=100, double tax_rate=0.06, double shipping=3.5);

void greeting(string name, string prefix ="Mr. ", string suffix=" ");

double calc_cost(double base_cost, double tax_rate, double shipping) {
    return base_cost += (base_cost*tax_rate)+shipping;
};

void greeting(string name, string prefix, string suffix){
    cout<<"Hello, " <<prefix+" " +name+ " "+ suffix <<endl;
};

int main() {
    
    double base_cost{};
    
    string name{}, prefix{}, suffix{};
    
   
     
    if(prefix!= "skip" || prefix!="Skip"){
        cout<<"Enter your Prefix or Skip: " ;
        cin>>prefix;
        
        if(name!="skip" || name!="Skip"){
            cout<<"Enter your Suffix Or Skip: ";
            cin>>name;
            
            if (suffix!="skip" || suffix!="Skip"){
                cout<<"Enter your Suffix or Skip: ";
                cin>>suffix;
            }else {
                cout<<"Enter base cost of your product: ";
                cin>>base_cost;
                
                greeting(name, prefix, suffix);
                
                cout<<"Your total cost is: ";
                calc_cost(base_cost);
            }
            } else {
                cout<<"Enter base cost of your product: ";
                cin>>base_cost;
                
                greeting(name, prefix, suffix);
                
                cout<<"Your total cost is: ";
                calc_cost(base_cost);
            }
    } else {
        cout<<"Enter base cost of your product: ";
        cin>>base_cost;
        
        greeting(name, prefix, suffix);
        
        cout<<"Your total cost is: ";
        calc_cost(base_cost);
        
    }
   

}
