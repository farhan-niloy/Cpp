//
//  main.cpp
//  Tower of Hanoi
//
//  Created by Niloy Farhan on 6/3/24.
//

#include <iostream>

void TOH(int n, int A, int B, int C) 
{
    if(n>0)
    {
        TOH(n-1, A,C,B);
        std::cout<<"(" <<A <<"," <<C <<")" <<" ";
        TOH(n-1, B,A,C);
    }
    
}

int main(int argc, const char * argv[]) {
    TOH(3,1,2,3);
    return 0;
}
