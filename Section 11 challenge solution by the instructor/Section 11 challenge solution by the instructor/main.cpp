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

double calc_mean(const vector<int> &v);

void handle_smallest(const vector<int> &v);
void handle_largest(const vector<int> &v);

void handle_find(const vector<int> &v);

void handle_unknown();
void handle_quit();


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
            case 'S':
                handle_smallest(numbers);
                break;
            case 'L':
                handle_largest(numbers);
                break;
            case 'F':
                handle_find(numbers);
                break;
            case 'Q':
                handle_quit();
                break;
                
            default:
                handle_unknown();
                break;
                
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

double calc_mean(const vector<int> &v){
    int total{};
    for(auto num:v)
        total +=num;
    return static_cast<double>(total)/v.size();
}

void handle_smallest(const vector<int> &v){
    int smallest;
    smallest = v.at(0);
    for(auto num:v)
        if (num<smallest)
            smallest =num;
    cout<<"The smallest number on the list is: " <<smallest;
}

void handle_largest(const vector<int> &v) {
    int largest{};
    largest=v.at(0);
    for(auto num:v)
        if(num>largest)
            largest=num;
    cout<<"The largest number on the list is: " <<largest;
}

void handle_find(vector<int> &v) {
    
}

void handle_unknown(){
    cout<<"Invalid input please enter again!" <<endl;
}

void handle_quit() {
    cout<<"GoodBye :)" <<endl;
}
