/*Homework2: Branching 
Luis Ramirez
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
cout<<"------ age eligibility ------"<<endl;

int age;
cout<<"Enter your age: "; // propmts the user to enter age
cin>>age;

/*using if and else if statments to determine 
eligibility based on there age*/
if (age < 13)
{
    cout<<"Not eligible for any activities."<<endl;
} else if (age>=13 && age<=17)
{
    cout<<"Eligible for youth activities."<<endl;
} else if (age>=18 && age<=64)
{
    cout<<"Eligibel for adult activities."<<endl;
} else
{
    cout<<"Eligibel for senior actibities."<<endl;
}if (age<=0 || age>120)
{
    cout<<"Invalid age.Please enter a valid age."<<endl;
}

cout<<"------ nested conditional statement ------"<<endl;
// prompts the user to enter two numbers.
int n1, n2, sum;
cout<<"Enter the first number: "<<endl;
cin>>n1;
cout<<"Enter tne secoung number: "<<endl;
cin>>n2;

sum = n1 + n2; // using addition to calculate the sum.

/*using if and else if statments to prompt a message depending on
the sum we get.*/
if (sum < 0)
{
    cout<<"False alarm! The sum is "<<sum<<endl;
} else if (sum >=1 && sum <=100)
{
  if (sum % 5 ==0)
  {
    cout<<sum<<" is a pentagon"<<endl;
  } else if (sum % 2 !=0)
  {
    cout<<sum<<" is an odd guess"<<endl;
  }
} else if (sum >= 101 && sum <=200)
{
    cout<<"The new lucky number is "<<sum<<endl;
} else if (sum >=201 && sum <=999)
{
    cout<<sum<<" is a dreaming number"<<endl;
}else if (sum >=1000)
{
    if (sum % 2 == 0)
    {
        cout<<sum<<" approaches to the infinite evenly!"<<endl;
    }else
    {
        cout<<sum<<" approaches to the infinite and beyond!"<<endl;
    }
}

cout<<"------ temperatuer converter ------"<<endl;


int choice;
double temp, result;
// A menu for the user to see the choices available 
do {
    cout<<"1. Celsius to Fahrenheit\n";
    cout<<"2. Fahrenheit to Celsius\n";
    cout<<"3. Kelvin to Celsius\n";
    cout<<"4. Kelvin to Fahrenheit\n";
    cout<<"5. Exit\n"; // If the number 5 is selected it will exit the program 
    cout<<"Enter your choice (1-5): ";
    cin>>choice; // allows the user to select the options that are displayed (1-5).
/*switch case statements are used to allow the selected choice in the
menu to be executed   */
    switch (choice) { 
        case 1:
        cout<<"Enter temperature in celsius: ";
        cin>>temp;
        result = temp *(9/5) +32; //conversion for celsius to Fahrenheit
        cout<<temp<<"celsius is equal to "<<result<<" Fahrenheit"<<endl;
        break;
        case 2:
        cout<<"Enter temperature in Fahrenheit: ";
        cin>>temp;
        result = (temp - 32) * (5/9); // conversion for fahrenheit to celsius 
        cout<<temp<<"Fahrenheit is equal to "<<result<<" celsius"<<endl;
        break;
        case 3:
        cout<<"Enter temperature in kelvin: ";
        cin>>temp;
        result = temp - 273.15; // conversion for kelvin to celsius
        cout<<temp<<" Kelvin is equal to "<<result<<" celsius"<<endl;
        break;
        case 4: 
        cout<<"Enter temperature in kelvin: ";
        cin>>temp;
        result = (temp - 273.15) * (9/5) + 32; //conversion for kelvin to fahrenheit
        cout<<temp<<" kelvin is equal to "<<result<<" Fahrenheit"<<endl;
        break;
        case 5:
        cout<<"Exiting the program."<<endl; 
        break;
        default:
        cout<<"Invalid option. please enter a value from 1 to 5."<<endl; //anything other then (1-5) is inputed it will prompt the user as invalid.
    }
    cout<<endl; //end of the do while loop

} while (choice != 5);

return 0;

}