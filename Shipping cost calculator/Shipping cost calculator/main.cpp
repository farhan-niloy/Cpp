//
//  main.cpp
//  Shipping cost calculator
//
//  Created by Farhan Niloy on 2/4/23.
//

/*
 Shipping cost calculator
 
 Ask the user for package dimension in inches
 length, width, height - thesae should be integers
 
 All dimension nmust be !10 inches or less or we can't ship
 
 Base cost $2.50
 If package volume is greater than 100 cubic inches there is a 10% surcharge
 If package volume is greater than 500 cubic inches there is a 25% surcharge
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    
    double package_dimension;;
    int length{}, width{}, height{};
    double base_cost{2.50};
    
    const int tier1_threshold {100};  //volume, cubic inches
    const int tier2_threshold {500}; //volume, cubic inches
    
    int max_dimension_length {10}; //inches
    
    double tire1_surcharge{.10}; //10% extra
    double tire2_surcharge{.25}; //25% extra
    
    cout<<"Hello! Welcome to the Package Cost Calculator" <<endl;
    cout<<"Engter length, width, and height of the poackage separated by spaces: ";
    cin>>length>>width>>height;
    
    if(length>max_dimension_length || width>max_dimension_length || height>max_dimension_length){
        cout<<"Sorry, Package rejected - dimension exceeded" <<endl;
    } else {
        double package_cost{};
        package_dimension = length*width*height;
        package_cost=base_cost;
        
        if (package_dimension>tier2_threshold){
            package_cost += package_cost*tire2_surcharge;
            cout<<"adding tier 2 surcharge" <<endl;
        } else if(package_dimension>tier1_threshold) {
            package_cost += package_cost*tire1_surcharge;
            cout<<"adding tier 1 surcharge" <<endl;
        }
        cout<<fixed <<setprecision(2); 
            cout<<"The volume of your package is: " <<package_dimension <<endl;
            cout<<"Your package will cost $" <<package_cost <<endl;

    }
    

    return 0;
    
}
