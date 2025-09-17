/*
Luis Ramirez
sep 15, 2025
lab 6, nested conditional statement and switch
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "\n ------example 1: nested conditional statement ------ \n"
         << endl;

    int n = -8;
    if (n > 0)
    {
        if (n % 2 == 0)
        {
            cout << "The number is positive and even" << endl;
        }
        else
        {
            cout << "The number is positive and odd" << endl;
        }
    }
    else if (n < 0)
    {
        if (n % 2 == 0)
        {
            cout << "The number is negative and even" << endl;
        }
        else
        {
            cout << "The number is negative and odd" << endl;
        }
    }
    else
    {
        cout << "The number is zero" << endl;
    }

    cout << "\n ------example 2: organize three numbers in decreasing order ------ \n"
         << endl;

    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 > num2 && num1 > num3)
    {
        if (num2 > num3)
            cout << num1 << "\t" << num2 << "\t" << num3 << endl;
        else
            cout << num1 << "\t" << num3 << "\t" << num2 << endl;
    }
    else if (num2 > num1 && num2 > num3)
    {
        if (num1 > num3)
            cout << num2 << "\t" << num1 << "\t" << num3 << endl;
        else
            cout << num2 << "\t" << num3 << "\t" << num1 << endl;
    }
    else if (num3 > num2 && num3 > num1)
    {
        if (num1 > num2)
            cout << num3 << "\t" << num1 << "\t" << num2 << endl;
        else
            cout << num3 << "\t" << num2 << "\t" << num1 << endl;
    }
    else
    {
        cout << "All three numbers are the same!" << endl;
    }

    cout << "\n ------example 3: switch statments ------ \n"
         << endl;
    int dayoff;
    cout << "select a day-off: \n1 Monday \n2 Tuesday \n3 Wednesday \n4 Thursday \n5 Friday" << endl;
    cin >> dayoff;

    switch (dayoff)
    {
    case 1:
        cout << "You are off on monday" << endl;
        break;
    case 2:
        cout << "You are off on tuesday" << endl;
        break;
    case 3:
        cout << "You are off on wednesday" << endl;
        break;
    case 4:
        cout << "You are off on thursday" << endl;
        break;
    case 5:
        cout << "You are off on friday" << endl;
        break;
    default:
        cout << "unable to read the day-off" << endl;
        break;
    }

    cout << "\n ------example 4: switch to select a gender ------ \n"
         << endl;
    char gender = ' ';
    cout << "select a gender\n";
    cout << "m or M for male\n";
    cout << "f or F for female\n";
    cout << "o or O for other\n";
    cin >> gender;

    switch (gender)
    {
    case 'm':
    case 'M':
        cout << "gender = male" << endl;
        break;
    case 'f':
    case 'F':
        cout << "gender = female" << endl;
        break;
    case 'o':
    case 'O':
        cout << "gender = other" << endl;
        break;
    default:
        cout << "gender = undefined" << endl;
        break;
    }

    cout << "\n ------EXERCISE ------ \n"
         << endl;
    double savings;
    cout << "Enter the amount of money on savings: ";
    cin >> savings;

    if (savings <= 0)
    {
        cout << "Have some savings!" << endl;
    }
    else if (savings > 0 && savings < 200000)
    {
        cout << "Keep saving!" << endl;
    }
    else if (savings >= 200000 && savings <= 500000)
    {
        cout << "Apartment or co-op" << endl;
        if (savings >= 200000 && savings <= 300000)
        {
            cout << "with $" << savings << " you can afford a Studio" << endl;
        }
        else if (savings >= 300001 && savings <= 400000)
        {
            cout << "with $" << savings << " you can afford a Apartment or co-op with 1 bedroom and 1 bathroom" << endl;
        }
        else if (savings >= 400001 && savings <= 500000)
        {
            cout << "with $" << savings << " you can afford a Apartment or co-op with 2 bedrooms and 1 bathroom" << endl;
        }
    }
    else if (savings >= 500001 && savings <= 1000000)
    {
        cout << "House" << endl;
        if (savings >= 500001 && savings <= 700000)
        {
            cout << "with $" << savings << " you can afford a house with 2 bedrooms and 2 bathrooms" << endl;
        }
        else if (savings >= 700001 && savings <= 1000000)
        {
            cout << "with $" << savings << " you can afford a house with 3 bedrooms and 3 bathrooms" << endl;
        }
    }
    else if (savings >= 1000001)
    {
        cout << "with $" << savings << " you can afford a Mansion" << endl;
    }
    cout << "\n ------EXERCISE2 ------ \n";

    int number;
    char choice;
    cout << "Enter a number: ";
    cin >> number;

    cout << "Do want to double the number? (y/n): " << endl;
    cin >> choice;

    switch (choice)
    {
    case 'y':
    case 'Y':

        number = number * 2;
        break;

    case 'n':
    case 'N':
        break;
    default:
        number = 0;
    }

    cout << "the number is set to " << number << endl;

    return 0;
}
