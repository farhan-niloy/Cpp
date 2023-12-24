//
//  main.cpp
//  Loops
//
//  Created by Farhan Niloy on 3/4/23.
//

#include <iostream>

#include <vector>

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
    
    for (int i6{1}; i6<=100; i6++){
        cout<<i6;
        if (i6%10==0){
            cout<<endl;
        } else {
            cout<<" ";
        }
    }

        
        for (int i7{1}; i7<=100; i7++ ) {
            cout<<i7;
            cout<<((i7%10==0)? "\n":" ");
        }
    
    vector <int> nums {10, 20, 30, 40, 50, 60, 70, 80, 90,};
    for(unsigned i8{0}; i8<nums.size(); i8++) {
        cout<<nums[i8]; cout<<" ";
        
    }

    vector <int> nums2 {10, 20, 30, 40, 50, 60, 70, 80, 90,};
    for(unsigned i9{0}; i9<=nums2.at(5); i9++) {
        cout<<i9;
        cout<<((i9/nums2.at(3)!=0)? "\n":" " );
        
    }
    
    

        
        return 0;
}
