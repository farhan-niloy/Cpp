//
//  main.cpp
//  Section 11 Challenge
//
//  Created by Farhan Niloy on 19/8/23.
//NOTE: The problem is unsolved!

#include <iostream>
#include <vector>

using namespace std;

void print_numbers();
void the_mean();
void small_number();
void large_number();

void print_numbers( vector<int> numbers){
    for(auto s:numbers)
        cout<<s <<" ";
}

void the_mean (vector<int> numbers){
    double total{};
    for(auto s: numbers)
        total+=s;
    cout<<total/numbers.size() <<endl <<endl;
};

void small_number (vector<int> numbers){
    int smallest{};
    smallest=numbers.at(0);
    for(auto s: numbers)
        if (s<smallest)
            smallest=s;
    cout<<smallest <<endl;
}

void large_number (vector<int> numbers){
    int largest{};
    largest=numbers.at(0);
    for(auto s: numbers)
        if (s>largest)
            largest=s;
    cout<<largest <<endl;
}


int main() {
    
    vector<int> numbers{1, 5, 50};
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
        } else if(selection=='M' || selection=='m'){
            if(numbers.size()==0) {
                cout<<"The list is empty - Please add number first!" <<endl;
            } else{
                cout<<"The mean is: ";
                the_mean(numbers);
            }
        } else if (selection=='S' || selection =='s'){
            if(numbers.size()==0) {
                cout<<"The list is empty - please add value first!";
            } else {
                cout<<"The smallest number is: ";
                small_number(numbers);
            }
        } else if (selection=='L' || selection =='l'){
            if(numbers.size()==0) {
                cout<<"The list is empty - please add value first!";
            } else {
                cout<<"The largest number is: ";
                large_number(numbers);
            }
            
        }
        
    } while ( selection != 'q' && selection !='Q');
    
    return 0;
}
