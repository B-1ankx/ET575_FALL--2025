/*
Luis Ramirez
Homework 6, functions and introduction to pointers and reference*/


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;


int rand_side() {
    return rand() % 20 + 1;
}

double hyp( int side1, int side2) {
    return sqrt(pow(side1, 2) + pow(side2, 2));
}

void print_result(int side1, int side2, double hyp) {
    cout << "The hypotenuse of a right angle with side " << side1
         << " and " << side2 << " is = " << hyp << endl;
}

