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

void handle_display(const vector<int> &v);
void display_list(const vector<int> &v);

void handle_add(vector<int> &v);

void calc_mean(const vector<int> &v);





int main() {
    
    vector <int> numbers;
    char selection{};
    
    do {
        display_menu();
        selection = get_selection();
        switch (selection) {
            case 'P':
                handle_display(numbers);
                break;
            case 'A':
                handle_add(numbers);
                break;
            case 'M':
                calc_mean(numbers);
                break;
                
            default:
                handle_unknown();
                break
                
        }
        
        
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
    cout<<"Enter your choice: " <<endl;
}

char get_selection(){
    char c{};
    cin>>c;
    return toupper(c);
}

void handle_display(const vector<int> &v){
    if (v.size()==0)
        cout<<"[] - The list it empty! " <<endl;
    else
        display_list(v);
}

void display_list(const vector<int> &v){
    cout<<"[";
    for(auto num:v)
        cout<<num <<" ";
    cout<<"]" <<endl;
}

void handle_add(vector<int> &v){
    int num_to_add{};
    cout<<"Enter a number to add: ";
    cin>>num_to_add;
    v.push_back(num_to_add);
    cout<<num_to_add <<"Added" <<endl;
}

void calc_mean(const vector<int> &v);
