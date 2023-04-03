//
//  main.cpp
//  Loops
//
//  Created by Farhan Niloy on 3/4/23.
//

#include <iostream>

using namespace std;

int main (){
    int i{0};
    int i2{0};
    


        for (i=1; i<=10; i+=2) {
            cout<<i<<endl;
        }

    for (i2=10; i2>=0; i2--)
        cout<<i2<<endl;
    
    //version 20
    
    for (int i3={10}; i3<=100; i3+=10){
        cout<<i3 <<endl;
        
    }
    
    for (int i4={1}; i4<=1; ++i4) {
        cout<<"Shut up!" <<endl;
    }
    
    for (int i5{1}, j{5}; i5<=5; ++i5, ++j)
        cout<<i5<<" + "<<j <<" = " <<(i5+j)<<endl;

        
        return 0;
}
