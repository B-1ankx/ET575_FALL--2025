/*
Luis Ramirez
oct 27, 2025
lab 13: random variables*
*/

#include <iostream>
using namespace std;
#include "lab13_function_ramirez.cpp"
#include <time.h>

int main(){
    srand(time(0));

    cout<<"\n----- Example 1: random number -----"<<endl;

    int r = random_number();
    cout<<"Random number = "<<r<<endl;   

    cout<<"\n----- Example 2: different random number -----"<<endl;

    int diff_random = different_random();
    cout<<"Different random number = "<<diff_random<<endl; 

    cout<<"\n----- Example 3: random number between 0 and 9 -----"<<endl;

    int r_0_9 = random_0_9();
    cout<<"number between 0 and 9 = \t"<<r_0_9<<endl;

    cout<<"\n----- Example 4: random number between -10 and 5 -----"<<endl;

    cout<<"Number between -10 and 5 \t"<<random_neg10_5()<<endl;

    cout<<"\n----- Exercise: -----"<<endl;
    int roll1 = random_1_6();
    int roll2 = random_1_6();
    
    //call function to check for snake eyes
    bool result = compare_ones(roll1, roll2);
    
    //call function to prompt results
    prompt_results(roll1, roll2);

    return 0;
}