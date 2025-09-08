/*
luis ramirez 
aug 27, 2025
lab 1
*/ 
// c++ libraries

#include <iostream>
using namespace std;
int main() 
{
    cout << "------ Example 1: cout data ------"<<endl;
    cout << "this is a c++ code"<<endl;
    //variables = temporary storage of data
    // declare the variable first
    string username = "peterpan123";
    cout << "\nWelcome to c++ \t\t"<<username<<endl;
    
    cout << "------ Example 2: cin data ------"<<endl;
    cout<< "Enter a new username "<<endl;
    cin >> username;
    cout<<"New user is"<<username<<endl;

    cout << "------ Example 2: data type ------"<<endl;
    // declare variable
    char sym = '%';
    float distance = 5.63;
    int number = 8;

    cout<<"Given symbol = "<<sym<<endl;
    cout<<"Given distance ="<< distance<<endl;
    cout<< "Given number ="<<number<<endl;
    

    cout << "------ Exercise ------" << endl;
    // Declare variables
    string country;
    char gender;
    int zipcode;
    double rate;

    // Collect data
    cout << "Enter country: ";
    cin >> country;
    cout << "Enter gender (f for female, m for male, o for others): ";
    cin >> gender;
    cout << "Enter zip code: ";
    cin >> zipcode;
    cout << "Enter tax rate (decimal): ";
    cin >> rate;

    // Print the results
    cout << "\nYou entered:" << endl;
    cout << "Country: " << country << endl;
    cout << "Gender: " << gender << endl;
    cout << "Zip Code: " << zipcode << endl;
    cout << "Tax Rate: " << rate << endl;

    return 0;
}
