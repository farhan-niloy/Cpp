//
//  main.cpp
//  Vectors & Arrys
//
//  Created by Farhan Niloy on 1/4/23.
//

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> vector1, vector2, vector3 {100, 200, 300}, vector4{500, 400, 200};
    
    vector1.push_back(20);
    vector2.push_back(30);
    
    
    cout<<"vector1 and vector2's values are " <<vector1.at(0)<<" " <<vector2.at(0) <<endl;
    cout<<"vector1 and vector2's size is " <<vector1.size() <<" " <<vector2.size() <<endl;
    
    int okay = 200;
    vector2.push_back(100);
    vector2.push_back(okay);
    
    cout<<"vector2's values are " <<vector2.at(0) <<" " <<vector2.at(1) <<" " <<vector2.at(2) <<" Vector2's size is: " <<vector2.size() <<endl;
    
    
    vector <vector<int>>vector_2D;
    
    vector_2D.push_back(vector1);
    vector_2D.push_back(vector2);
    vector_2D.push_back(vector4);
    vector_2D.push_back(vector3);
    
    
    cout<<"vector_2D's elements at row 1 is: " <<vector_2D.at(0).at(1) <<endl;
    cout<<"vector_2D's elements at row 1 is: " <<vector_2D.at(1).at(1) <<endl;
    cout<<"vector_2D's elements at row 1 is: " <<vector_2D.at(2).at(0) <<endl;
    cout<<"vector_2D's elements at row 1 is: " <<vector_2D.at(3).at(0) <<endl;
    
    
    
    return 0;
}



