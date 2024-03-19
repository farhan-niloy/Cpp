//
//  main.cpp
//  Array ADT
//
//  Created by Farhan Niloy on 3/18/24.
//

#include <iostream>

using namespace std;

struct Array {
//    int *A;
    int A[20];
    int size;
    int length;
};

void Display( struct Array arr) {
    int i;
    cout<<"Elements are: " ;
    for(i = 0; i<arr.length; i++)
        cout<<arr.A[i] <<" ";
        cout<<"\n";
}

int main(int argc, const char * argv[]) {
    struct Array arr = {{2, 3, 4, 5, 6}, 20, 5};
//    int n, i;
//    cout<<"Enter size of an array: ";
//    cin>> arr.size;
//    arr.A = new int(arr.size);
//    arr.length = 0;
//
//    cout<<"Enter number of numbers: ";
//    cin>> n;
//    arr.length = n;
    
//    cout<<"Enter all Elements\n";
//    for(int i = 0; i < arr.length; i++)
//        cin>>arr.A[i];
    
    Display(arr);
    
    return 0;
}
