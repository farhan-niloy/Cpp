//
//  main.cpp
//  Infinite loop
//
//  Created by Farhan Niloy on 4/4/23.
//

#include <iostream>

using namespace std;

int main (){
//    for (;;)
//        cout<<"This will continue forever" <<endl;
//
//    while (true)
//        cout<<"This will continue forever" <<endl;
//
//
//    do {
//        cout<<"This will continue forever";
//    } while (true);
    
    while (true) {
        char again{};
        cout<<"Do you want to loop again? (Y/N): ";
        cin>>again;
        if (again == 'N' || again =='n')
            break;
    }
    
    
    return 0;
}
