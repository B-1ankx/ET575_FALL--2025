#include <iostream>
#include "Homework 5, functions.cpp"
using namespace std;

int main() {

    int s = speed();
    float temp = temperature();
    prompt_result(windspeed(s, temp));

    return 0;
}