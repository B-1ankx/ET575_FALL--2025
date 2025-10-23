/*
luis ramirez
lab11, introduction to functions
*/

#include <iostream>
using namespace std;

//void function does not return any value
void printhello(){
    cout << "hello function!" << endl;
    
    return;
}

//void function with parameters
void greating (string name){
    cout << "good afternoon! " << name << endl;

    return;
}

//example 3, function with returns an integ
int returnfive(){
    return 5;
}

//example 4, any code after the return will not be executed 
void printsome(){
    cout<<"Somthing"<<endl;
    return;
    cout<<"After the return"<<endl;
}

int somenumber(){
    int num = 10;
    return num;
    num += 2;
    return num;
}

//Example 5, function that calculates and returns the area of a square
float areasquare(float side){
    float area = side * side;
    return area;
}

//example 6, function that calculates and returns the procuct of two numbers

int product(int n1, int n2){
    return n1 * n2;
}

//example 7, function that calculates and returns the farenheit temperature

double fah(double celsius){
    return celsius * 1.8 + 32;
}

void printfah(double celsius){

    double f = fah(celsius);
    cout<<"The fahrenheit temperature is : \t"<< f << endl;

}

//example 8, check a number
string checknumber(int number){
    if (number == 0){
        return "zero";
    }
    else if (number > 0){
        return "positive";
    }
    else {
        return "negative";
    }
}

void printnumber(string n){
    cout<<"The number is : "<< n << endl;
}

//EXERCISE

bool isEven(int num){
    if(num % 2 == 0){
        return true;
    }
    else{
        return false;
    }
}

void printresult(int num){
    bool result = isEven(num);
    cout<<"The number "<< num <<" is "<< (result ? "even" : "odd") << endl;
}



