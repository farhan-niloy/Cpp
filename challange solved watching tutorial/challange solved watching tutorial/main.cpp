

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> nums{};
    char selection{};
    
    do {
        
        cout<<"P - print number" <<endl;
        cout<<"A - add number" <<endl;
        cout<<"M - mean of number" <<endl;
        cout<<"L - largest number" <<endl;
        cout<<"S - smallest number" <<endl;
        cout<<"Q - quit" <<endl;
        cout<<"==================================" <<endl;
        cout<<"Choose what whould you like to do: " ;
        cin>>selection;
        cout<<endl;
        
        
        if (selection == 'p' || selection =='P') {
            if (nums.size()!=0){
                cout<<"[ ";
                for(int num:nums)
                    
                    cout <<num <<" ";
                
                cout<<"] " <<endl;
            } else {
                cout<<"[] - List is empty";
            }
            
        } else if (selection == 'a' || selection == 'A') {
            int add_number{};
            cin>>add_number;
            nums.push_back(add_number);
            
            cout<<"\n" <<add_number <<" has been added to the list";
            
        } else if (selection =='m' || selection =='M'){
            if(nums.size() !=0) {
                double total{};
                for(auto mean:nums)
                    total +=mean;
                
                cout<<"The mean is: " << static_cast<double>(total)/nums.size() <<endl;
                
            } else {
                cout<<" [] The list is empty" <<endl;
            }
        } else if (selection == 'l' || selection == 'L') {
            if (nums.size() != 0) {
                int largest = nums.at(0);
                for (auto num : nums)
                    if (largest<num)
                        largest = num;
                
                cout<<"The largest number is: " <<largest <<endl;
                
            } else {
                cout<<"The list is empty" <<endl;
            }
        } else if (selection == 'S'|| selection == 's') {
            if(nums.size()!=0){
                int smallest = nums.at(0);
                for (auto i:nums)
                    if (smallest>i)
                        smallest = i;
                    
                    cout<<"The smallest number is: " <<smallest <<endl;
                    
                } else {
                    cout<<"The list is empty!";
            }
        } else if (selection == 'q' || selection == 'Q') {
            cout<<"Good bye!" <<endl;
        }  else {
            cout<<"Invalid selection" <<endl;
        }

    } while (selection!= 'Q' && selection != 'q');
        
        

    
    return 0;
}
