
//
//  main.cpp
//  arry archive
//
//  Created by Farhan Niloy on 6/4/23.
//

#include <iostream>

using namespace std;

int main (){

    char vowels[5] {'a', 'e', 'i', 'o', 'u'};

    cout<<"\nFirst vowel is: " <<vowels[0] <<endl;
    cout<<"\nLast vowel is: " <<vowels[4] <<endl;
    cout<<"\nFirst vowel is: " <<vowels[sizeof(vowels)-5] <<endl;
    cout<<"\nLast vowel is: " <<vowels[sizeof(vowels)-1] <<endl;

    return 0;
}