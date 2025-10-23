/*
luis ramirez
lab11, introduction to functions
*/

#include <iostream>
using namespace std;
#include "lab11_funtion.cpp"

int main(){

    cout<<"\n----- Example1 :void function -----"<<endl;
    printhello();

    cout<<"\n----- Example2 :void function with parameters -----"<<endl;
    string username = "Anna";
    greating("peter");
    greating("username");
    greating("carl");

    cout<<"\n----- Example3 :function with value-----"<<endl;
    int savefive = returnfive();
    savefive += 2;
    cout<<"The returning value after += 2 = \t"<< savefive << endl;

    cout<<"\n----- Example4 :code after return -----"<<endl;

    printsome();    
    int n = somenumber();
    cout<<"some number \t"<< n << endl;

    cout<<"\n----- Example5 :function that calculates and returns the area of a square -----"<<endl;

    float area_square1 = areasquare(2.5);
    cout<<"Area of a square is : \t"<< area_square1 << endl;

    cout<<"\n----- Example6 :product of two numbers -----"<<endl;

    int p = product(2, 3);
    cout<<"The product is : \t"<< p << endl;

    cout<<"\n----- Example7 :calculates the fahrenheit temperature -----"<<endl;

    double f = fah(12.5);
    printfah(f);    

cout<<"\n----- Example8 : check a number -----"<<endl;

string checknum = checknumber(-1);
printnumber(checknum);

cout<<"\n----- EXERCISE -----"<<endl;

int num;
cout<<"Enter a number: ";
cin>> num;
printresult(num);

    return 0;

}

