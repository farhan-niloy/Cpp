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

double calc_cylinder_volume(double radius, double height){
    //return pi*radius*radius*height;
    return clac_circle(radius)*height;
}

void circle_area (){
    double radius{};
    cout<<"Enter the radius of the circle in double: ";
    cin>>radius;
    
    cout<<"The area of the circle with radius " <<radius <<" is: " <<clac_circle(radius) <<endl;
}

void volume_cylinder(){
    double radius{};
    double height{};
    
    cout<<"Enter the radius of the cylinder: ";
    cin>>radius;
    
    cout<<"Enter the height of the cylinder: ";
    cin>>height;
    
    cout<<"The volume of the cylinder with radius " <<radius <<" and height " <<height <<" is: " <<calc_cylinder_volume(radius, height) <<endl;
    
}

int main() {
    circle_area();
    volume_cylinder();
    return 0;
}
