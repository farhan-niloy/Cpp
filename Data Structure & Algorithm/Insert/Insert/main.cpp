//
//  main.cpp
//  Insert
//
//  Created by Farhan Niloy on 3/18/24.
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

void Append(struct Array *arr, int x)
{
    if(arr->length<arr->size)
        arr->A[arr->length++]=x;
}

void Insert(struct Array *arr, int index, int x)
{
    if(arr->size > arr->length)
    {
        if(index>=0 && index == arr->length)
        {
            arr->A[index] = x;
        } else {
            for(int i = arr->length; i>index; i--){
                arr->A[i] = arr->A[i-1];
            }
            arr->A[index] = x;
            arr->length ++;
        }
    }
    
    
        
}

int main(int argc, const char * argv[]) 
{
    struct Array arr = {{2, 3, 4, 5, 6}, 20, 5};
    
    Append(&arr, 10);
    
    Insert(&arr, 4, 100);
    
    Display(arr);
    
    return 0;
}
