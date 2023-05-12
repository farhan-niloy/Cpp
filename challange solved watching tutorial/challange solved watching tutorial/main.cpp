

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
        cout<<"L - Biggest number" <<endl;
        cout<<"S - Smallest number" <<endl;
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
        }

    } while (selection!= 'Q' && selection != 'q');
        
        

    
    return 0;
}
