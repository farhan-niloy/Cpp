//
//  main.cpp
//  Delete
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

int Delete(struct Array *arr, int index) {
    if(index>=0 && index<arr->length-1) {
        int x=arr->A[index];
        for(int i = index; i <= arr->length; i++)
            arr->A[i] = arr->A[i + 1];
        arr->length--;
        return x;
    }
    return 0;
}

int main(int argc, const char * argv[])
{
    struct Array arr = {{2, 3, 4, 5, 6}, 20, 5};
    
    cout<< Delete(&arr, 2) <<endl;
    
    Display(arr);
    
    return 0;
}
