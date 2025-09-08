/*  
student's full name
lab2, operators
sep 3, 2025
*/
#include<iostream>
using namespace std;

int main (){
    cout<<"\n------ Example 1: Arithmetic Operators ------"<<endl;
    //set number format 
    cout.setf(ios::fixed);
    cout.precision(3);
    // calculate the height of a free fallling object
    //free_fall = 0.5 * gravity * time * time
    //declare a constant variable name 'gravity'
    const float GRAVITY = 9.8;
    //declare variable height and time
    float height = 0 , time = 0;
    //collect the falling time
    cout<<"Enter the falling time in seconds: ";
    cin>>time;
    //calculate the height of a free fall objedt
    height = 0.5 * GRAVITY * time * time;
    //print the results
    cout<<"The height of a free falling object at "<<time<<" seconds is "<<height<<" meters "<<endl;

    cout<<"\n------ Example 2: assignment operstor ------"<<endl;
    int number1 = 10;
    int number2 = 3;
    cout<<"original number1 = "<<number1<<endl;
    number1 ++;
    cout<<"updated number1 = "<<number1<<endl;
    cout<<"original number2 = "<<number2<<endl;
    number2 --;
    cout<<"updated number2 = "<<number2<<endl;
    number2 += 5;
    cout<<"updated number2 by 5 = "<<number2<<endl;
    number1 *= 2;
    cout<<"updated number1 using *=2 --> "<<number1<<endl;

    cout<<"the remainder of "<<number1<<" / "<<number2<<" = "<< number1 % number2<<endl;
    cout<<"number1 = "<<number1<<endl;
    cout<<"number2 = "<<number2<<endl;

    number1 %= number2;
    cout<<"after %=, number1 = "<<number1<<endl;
    cout<<"after %=, number2 = "<<number2<<endl;

cout<<"\n------ Example 3: comparison operator ------"<<endl;
cout<<"is number1 = number2 ? "<<(number1 == number2)<<endl;
cout<<"is number1 > number2 ? "<<(number1 > number2)<<endl;
cout<<"is number1 < number2 ? "<<(number1 < number2)<<endl;
cout<<"is number1 not equal to number2 ? "<<(number1 != number2)<<endl;

cout<<"\n------ Example 4: logical operator ------"<<endl;
//AND operator
bool check_number = (number1 != number2) && (number1 < number2) && (number1>5);
//numbeer1 != number2 --> ture
//number1 < number2 --> true 
//number1 > 5 --> false
//check_number = true && true && false = false (0)
cout<<"the results of check_number is "<<check_number<<endl;

// OR Operator
bool check_or = (number2 > 10) || (number2 != 3) || (number2 < number1);
//number2 > 10 --> false
//number2 != 3 --> true
//number2 < number1 --> false
//false || true || false = true (1)
cout<<"the results of check_number is "<<check_or<<endl;


cout<<"\n------ Example 5: casting ------"<<endl;
int n = 5;
float m = n/2.0;

cout <<"implicit casting = "<<m<<endl;

cout << "\n------ EXERCISE ------" << endl;

// Arithmetic, Assignment, and Logical Operations Exercise
int a, b;
cout << "Enter two integers (a and b): ";
cin >> a >> b;

// Arithmetic Operations
cout << "\nArithmetic Operations:" << endl;
cout << "a + b = " << (a + b) << endl;
cout << "a - b = " << (a - b) << endl;
cout << "a * b = " << (a * b) << endl;
if (b != 0) {
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl;
} else {
    cout << "a / b = Undefined (division by zero)" << endl;
    cout << "a % b = Undefined (modulus by zero)" << endl;
}

// Assignment Operations
a += 10;
b -= 5;
cout << "\nAssignment Operations:" << endl;
cout << "a after a += 10: " << a << endl;
cout << "b after b -= 5: " << b << endl;

// Boolean (Logical) Operations
cout << "\nLogical Operations:" << endl;
cout << "Is a > b? " << (a > b ? "true" : "false") << endl;
cout << "Is a == b? " << (a == b ? "true" : "false") << endl;
cout << "Is a != b? " << (a != b ? "true" : "false") << endl;
cout << "Are both a and b positive? " << ((a > 0 && b > 0) ? "true" : "false") << endl;
cout << "Is either a or b negative? " << ((a < 0 || b < 0) ? "true" : "false") << endl;
cout << "Is a not greater than b? " << (!(a > b) ? "true" : "false") << endl;

return 0;

}