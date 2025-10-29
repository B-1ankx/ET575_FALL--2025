/*
luis ramirez
oct 29, 2025
lab 14 recursive
*/

#include <iostream>
using namespace std;

void cheers(int n){
    if(n == 1){
        //stop the recursive function 
        cout<<"STOP!"<<endl;
    }
    else{
        cout<<(n*2)<<"\t";
    //recursive function
    cheers(n-1);
    }
}

int getnumber(){
        int num;
        cout<<"Please enter a positive integer: ";
        cin>>num;
        if(num <= 0){
            cout<<"Invalid input. ";
            return getnumber(); //recursive call if the number is not positive
        }
            return num; //Return the valid positive integer
    }

int linear_recursive(int m){

    if(m>1){
        return (m+1)*linear_recursive(m-2);
    }
    else{
        return 10;
    }
}