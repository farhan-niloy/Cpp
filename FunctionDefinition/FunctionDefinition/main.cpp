//
//  main.cpp
//  FunctionDefinition
//
//  Created by Farhan Niloy on 2/8/23.
//

#include <iostream>
using namespace std;

const double pi{3.14159};

double clac_circle(double radius){
    return pi*radius*radius;
}

void circle_area (){
    double radius{};
    cout<<"Enter the radius of the circle in double: ";
    cin>>radius;
    
    cout<<"The area of the circle with radius " <<radius <<" is: " <<clac_circle(radius) <<endl;
}

int main() {

    return 0;
}
