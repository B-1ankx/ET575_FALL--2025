/*
Luis Ramirez
oct 27, 2025
lab 13: random variables*
*/

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
//function to return a random number

int random_number(){
    return rand();
}

//Example 2: differnt random number

int different_random(){
    srand(time(0));
    return rand();
}

//Example 3: range of random numbers
//generate random number between 0 and 9

int random_0_9(){
    return rand() % 10;
}

//Example 4: specific range of random numbers
int random_neg10_5(){
    return -10 + rand() % 16;
}

//Exercise
//function that generates a random number between 1 and 6
int random_1_6(){
    return 1 + rand() % 6;
}

//function to compare if two numbers are 1s
bool compare_ones(int die1, int die2){
    if (die1 == 1 && die2 == 1)
        cout<<"Snake Eyes!"<<endl;
    return (die1 == 1 && die2 == 1);
}

//function to prompt results
void prompt_results(int die1, int die2){
    cout<<"You rolled a "<<die1<<" and a "<<die2<<endl;
}