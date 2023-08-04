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
    cout<<"Hello, " <<prefix <<name <<suffix <<endl;
};

int main() {
    
    double cost{0};
    
    cost = calc_cost(200, 0.08);
    
    cout<<fixed <<setprecision(2);
    cout<<"Cost is: " <<cost <<endl;
    
    cost = calc_cost(200, 0.08, 6);
    
    cout<<fixed <<setprecision(2);
    cout<<"Cost is: " <<cost <<endl;
    
    cost = calc_cost(200);
    
    cout<<fixed <<setprecision(2);
    cout<<"Cost is: " <<cost <<endl;
    
    greeting("Rust");
    
    return 0;
}
