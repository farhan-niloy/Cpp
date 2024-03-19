//
//  main.cpp
//  Binary Search
//
//  Created by Farhan Niloy on 3/19/24.
//

#include <iostream>

using namespace std;

struct Array {
    int A[20];
    int size;
    int length;
};

void Display( struct Array arr)
{
    int i;
    cout<<"Elements are: " ;
    for(i = 0; i<arr.length; i++)
        cout<<arr.A[i] <<" ";
        cout<<"\n";
}

bool Compare(int comp, int x) {
    if(comp > x)
        return true;
    return -1;
}

int BinarySearch(struct Array *arr, int x){
    int l,h;
    l=0;
    h=arr->length;
    int middle = l+h/2;
    if(x == arr->A[middle]){
        return arr->A[middle];
    }
    if(Compare(arr->A[middle], x)){
        arr->A[middle] = h;
        
    }
    
    return -1;
};

int main(int argc, const char * argv[])
{
    struct Array arr = {{2, 4, 6, 8, 9, 12, 14, 17, 19, 20, 33, 19, 23, 25, 27, 33}, 15, 15};
    
    Display(arr);
    
    return 0;
}
