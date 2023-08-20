//
//  main.cpp
//  Section 11 challenge solution by the instructor
//
//  Created by Farhan Niloy on 19/8/23.
//

#include <iostream>
#include <vector>

using namespace std;

void display_menu();
char get_selection();


int main() {
    
    vector <int> numbers;
    char selection{};
    
    do {
        display_menu();
        selection = get_selection();
        add_numbers();
        
    } while (selection !='Q');
    
    
    return 0;
}


void display_menu(){
    cout<<"P - Print Numbers: " <<endl;
    cout<<"A - Add Numbers: " <<endl;
    cout<<"M - Calculate the mean of the numbers: " <<endl;
    cout<<"S - The smallest number: " <<endl;
    cout<<"L - The largest number: " <<endl;
    cout<<"-----------------------" <<endl;
}

char get_selection(){
    char c{};
    cin>>c;
    return toupper(c);
}
