/*
Luis Ramirez
Oct 24, 2025
lab12: scoping and predefined functions
*/

#include <iostream>
#include "lab12_function.cpp"
using namespace std;

//global variable
int num = -8;

void dosomthing(){
    //global variable
    num += 20;
    cout<<"num in dosomthing function: "<<num<<endl;
}

int main(){

    cout<<"\n-----example 1: local variables -----"<<endl;
    int sum = add(3, 7) + add(1, 6); //sum is local variable in the 
    cout<<"the total sum in main() is \t"<<sum<<endl;

    cout<<"\n-----example 2: global variables -----"<<endl;
    dosomthing();
    num = 5;
    cout<<"num in main function = \t"<<num<<endl;

    cout<<"\n-----example 3: predefined functions -----"<<endl;

    float s1 = 2;
    float s2 = 3;
    float h = hyp(s1, s2);
    printhyp(s1, s2, h);

    cout<<"\n----- Exercise -----"<<endl;

    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;

    cout<<"Enter four points (x1 y1 x2 y2): ";

    if (!(cin >> x1 >> y1 >> x2 >> y2)) {
        cout << "Invalid input" << endl;
        return 1;
    }

    float d = caldistance(x1, y1, x2, y2);
    printdistance(d);

   

    return 0;
}