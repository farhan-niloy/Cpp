//
//  main.cpp
//  BinarySearch
//
//  Created by Farhan Niloy on 4/18/24.
//

#include <stdio.h>

struct Array {
    int A[10];
    int length;
};

int BinarySearch(struct Array arr, int key) {
    int l, h, mid;
    l = 0;
    h = arr.length - 1;
    
    while (l <= h) {
        mid = (l + h) / 2;
        if (key == arr.A[mid])
            return mid;
        else if (key < arr.A[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}

int RBinSearch(int a[], int l, int h, int key) {
    
    int mid;
    
    if(l<=h){
        mid=(l+h)/2;
        if(key==a[mid])
            return mid;
        else if(key<a[mid]) {
            return RBinSearch(a, l, mid-1, key);
        } else
            return RBinSearch(a, mid+2, h, key);
    }
    
    return -1;
}

int main(int argc, const char * argv[]) {
    struct Array arr = {{2, 3, 4, 5, 6},5};
    printf("%d\n", BinarySearch(arr, 5));
    printf("%d\n", RBinSearch(arr.A, 0, arr.length, 5));
    
    return 0;
}
