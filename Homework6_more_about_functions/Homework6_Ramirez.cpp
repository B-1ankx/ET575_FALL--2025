/*
Luis Ramirez
Homework 6, functions and introduction to pointers and reference*/


#include <iostream>
#include "Homework6_function.cpp"
using namespace std;

int main() {
    int side1 = rand_side();
    int side2 = rand_side();
    double hypotenuse = hyp(side1, side2);
    print_result(side1, side2, hypotenuse);
    return 0;
}



