//
//  main.cpp
//  If else statement
//
//  Created by Farhan Niloy on 2/4/23.
//

#include <iostream>

using namespace std;

int main (){
    
    int score{};
    cout<<"Enter your score on the exam: (0-100)" <<endl;
    cin>>score;
    
    string letter_grade{0};
    
    if(score>=0 && score<=100){
        if(score>=90)
            letter_grade="A+";
        else if (score>=80)
            letter_grade="A";
        else if (score>=70)
            letter_grade="B";
        else if (score>=60)
            letter_grade="C";
        else if (score>=50)
            letter_grade="D";
        else
            letter_grade="F";
        
        cout<<"Your grade is : " <<letter_grade <<endl;
        
        if(letter_grade=="F")
            cout<<"Sorry, You must repeat this class!" <<endl;
        else
            cout<<"Congrats, that's a passing grade!" <<endl;
        
    } else{
        cout<<"Sorry, " <<score <<" is not in range" <<endl;
        
       
    }
    
    cout<<endl;
    return 0;
}
