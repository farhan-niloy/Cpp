//
//  main.cpp
//  Section 11 Challenge
//
//  Created by Farhan Niloy on 19/8/23.
//

#include <iostream>
#include <vector>

using namespace std;

void print_numbers();
int add_num_function(int a);

void print_numbers( vector<int> numbers){
    for(auto s:numbers)
        cout<<s <<" ";
}



int main() {
    
    vector<int> numbers{2, 4, 5};
    char selection{};
    
    do {
        
        cout<<"P - Print Numbers: " <<endl;
        cout<<"A - Add Numbers: " <<endl;
        cout<<"M - Calculate the mean of the numbers: " <<endl;
        cout<<"S - The smallest number: " <<endl;
        cout<<"L - The largest number: " <<endl;
        cout<<"-----------------------" <<endl;
        
        cin>>selection;
        
        
        if(selection =='P' || selection=='p') {
            if(numbers.size()==0)
                cout<<"The list is empty - no data! " <<endl;
            else{
                cout<<"[";
                print_numbers(numbers);
                cout<<"]" <<endl <<endl;
            }
        } else if (selection == 'A' || selection =='a'){
            if(numbers.size()==0){
                int added_number{};
                cout<<"The list is empty - Please input some values: " ;
                cin>>added_number;
                numbers.push_back(added_number);
            }else{
                    int added_number{};
                    cout<<"Add number to list: ";
                    cin>>added_number;
                    numbers.push_back(added_number);
                
                }
        }
        
    } while ( selection != 'q' && selection !='Q');
    
    return 0;
}


