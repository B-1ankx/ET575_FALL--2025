/*  
 Luis Ramirez
lab 5, control flow
september 26, 2023
*/  

#include <iostream>
#include <string>

using namespace std;
int main() {
    cout<<"\n----- example 1:bool variable -----"<<endl;
    //check if a number is positive
    //step 1: declare and collect a number
    int n;
    cout<<"enter a number: ";
    cin>>n;
    //step 2: check if the number is positive
    bool checkpositive = n>=0;
    //step 3: print the result
    cout<<"Is "<<n<<" positive? "<<checkpositive<<endl;

    cout<<"\n----- example 2: if statement -----"<<endl;
    //change the checking_code to 999 if a number is positive
    int checking_code = 111;
    if (n>=0){
        checking_code = 999;
    }
    cout<<"checking code = "<<checking_code<<endl;

    cout<<"\n----- example 3: if-else statement -----"<<endl;
    //check if a number is even or odd
    if (n%2==0){
        cout<<n<<" is EVEN"<<endl;
    }
    else {
        cout<<n<<" is ODD"<<endl;
    }

    cout<<"\n----- example 4: if-else statement -----"<<endl;
    // absolute value 
    if(n>=0){ 
       cout<<n<<" is positeve"<<endl;
    } 
    else {
        cout<<n<<" is negative"<<endl;
        n*=-1;
        cout<<"the absolute value is "<<n<<endl;
    }

    cout<<"\n----- example 5: multiway statement -----"<<endl;
    //select the color according to a number
    int wavelength = 0;
    string emitted_color = "";
    cout<<"enter a wavelength: ";
    cin>>wavelength;
    //multiway conditional statement
    if(0 <= wavelength && wavelength <= 379)
        emitted_color = "Ultraviolet";
    else if (380 <= wavelength && wavelength <= 520)
        emitted_color = "blue";
    else if (521 <= wavelength && wavelength <= 590)
        emitted_color = "green";
    else if (591 <= wavelength && wavelength <= 740)
        emitted_color = "red";
    else if (wavelength > 740)
        emitted_color = "Infrared";
    else
        emitted_color = "unable to read";

    //print the result
    cout << "the emitted color of wavelength " << wavelength << " is: " << emitted_color << endl;
    



    cout<<"\n----- exersice -----"<<endl;
      // declacre the variables
    string gpa = "";
    float final_exam = 0;
    float labs = 0;
    float projects = 0;
    float homework = 0;
    float grades = 0;

    cout << "enter the final exam grade: ";
    cin >> final_exam;
    cout << "enter the labs grade: ";
    cin >> labs;
    cout << "enter the projects grade: ";
    cin >> projects;
    cout << "enter the homework grade: ";
    cin >> homework;
    
    grades = final_exam * 0.5 + labs * 0.2 + projects * 0.2 + homework * 0.1;

    if (grades >= 90 && grades <= 100) {
        gpa = "A";
    } else if (grades >= 80 && grades < 90) {
        gpa = "B";
    } else if (grades >= 70 && grades < 80) {
        gpa = "C";
    } else if (grades >= 60 && grades < 70) {
        gpa = "D";
    } else if (grades >= 0 && grades < 60) {
        gpa = "F";
    } else {
        gpa = "Invalid input";
    }

    cout << "The final grade of: " << grades << " is equivalent to a GPA of: " << gpa << endl;

    return 0;   
}

    
