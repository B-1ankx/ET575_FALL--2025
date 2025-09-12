/*      
Luis Ramirez
lab5_controlflow
september 26, 2023
*/
#include <iostream>
using namespace std;

int main() {
    cout<<"\n ----- Example 1: bool variable -----"<<endl;
    //check if a number is positive
    //step 1: declare and collect a number
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    //step 2: check if the number is positive
    bool checkpositive = n>=0;
    //step 3: print the result
    cout<<"Is "<<n<<checkpositive<<endl;

    cout<<"\n ----- Example 2: if statement -----"<<endl;
    //change the checking_code to 999 if a number is positive
    int checking_code =111;
    if(n>=0){
        checking_code = 999;
    }
    cout<<"checking code = "<<checking_code<<endl;

    cout<<"\n ----- Example 3: if-else statement -----"<<endl;
    //check if a number is even or odd
    if(n%2 == 0){
        cout<<n<<" is Even"<<endl;
    } else {
        cout<<n<<" is Odd"<<endl;
    }

    cout<<"\n ----- Example 4: if-else statement -----"<<endl;
    //absolute value
    if(n>=0){
        cout<<n<<" is positive"<<endl;
    } 
    else {
        cout<<n<<" is negative"<<endl;
        n*=-1;
        cout<<"The absolute value is "<<n<<endl;
    }
    
    

    cout<<"\n ----- Example 5: multiway statements -----"<<endl;
    //select the color according to a wavelength
    int wavelength = 0;
    string emitted_color = "";
    cout<<"Enter a wavelength: ";
    cin>>wavelength;
    //multiway condition statement
    if (0 <= wavelength && wavelength <= 379)
        emitted_color = "Ultraviolet";
    else if (380 <= wavelength && wavelength <= 520)
        emitted_color = "blue";
    else if (521 <= wavelength && wavelength <= 590)
        emitted_color = "green";
    else if (591 <= wavelength && wavelength <= 740)
        emitted_color = "red";
    else if (wavelength >= 741)
        emitted_color = "Infrared";
    else
        emitted_color = "unable to read";

    //print the result
    cout<<"The emitted color of wavelength "<<wavelength<<" is "<<emitted_color<<endl;

    cout<<"\n ----- EXERCISE -----"<<endl;
    // declare variables
    string gpa = "";
    float final_exam = 0;
    float labs = 0;
    float homework = 0;
    float grade = 0;

    cout<<"Enter your final exam grade: ";
    cin>>final_exam;
    cout<<"Enter your labs grade: ";
    cin>>labs;
    cout<<"Enter your homework grade: ";
    cin>>homework;

    grade = final_exam*0.5 + labs*0.3 + homework*0.2;
    cout<<"Your final grade is: "<<grade<<endl;

    if(grade < 100 && grade >= 90){
        gpa = "A";
    } else if(grade < 89 && grade >= 80){
        gpa = "B";
    } else if(grade < 79 && grade >= 70){
        gpa = "C";
    } else if(grade < 69 && grade >= 60){
        gpa = "D";
    } else if(grade < 59 && grade >= 0){
        gpa = "F";
    }

    cout<<"A final grade of  "<<grade<<" is a equivalent to a GPA of "<<gpa<<endl;
    

    return 0;
}