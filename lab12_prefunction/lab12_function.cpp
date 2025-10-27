/*
Luis Ramirez
Oct 24, 2025
lab12: scoping and predefined functions
*/

#include <iostream>
#include <cmath>
using namespace std;

//example1: fuction that calculates and returns sum of two 

int add(int num1, int num2){

    int sum = num1 + num2; //sum is a local variable in function add()

    cout<<"the sum in function add() is \t"<<sum<<endl;
    return sum;
}

//example2: c++ predefined function
//function passes two arguments, calculates and returns the hypotenuse of a right angled triangle

float hyp(float side1, float side2){

    return sqrt(pow(side1, 2) + pow(side2, 2));
}
//function to print result

void printhyp(float s1, float s2, float h){

    cout<<"the hypotenuse of side "<<s1<<" and "<<s2<<" is "<<h<<endl;
}

//Exercise
//function to collect a number greater than 0

float caldistance(int x1, int y1, int x2, int y2){
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

//function to calculate the distance of four points
float caldistance4(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4){
    float d1 = caldistance(x1, y1, x2, y2);
    float d2 = caldistance(x3, y3, x4, y4);
    return d1 + d2;
}

//function to print the result
void printdistance(float d){
    cout<<"the distance is "<<d<<endl;
}
