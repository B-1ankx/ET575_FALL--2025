/*
lab 8, for loop
oct 8, 2025
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "\n-----Example 1: for loop-----" << endl;
    // print hello five times
    for (int action = 1; action <= 5; action++)
    {
        cout << "hello " << action << endl;
    }

    cout << "\n----- Example 2: for loop as a decrement counter -----" << endl;
    // print from 9 to 1
    int n = 9;
    for (n; n >= 1; n--)
    {
        cout << n << "\t";
    }
    cout << endl;

    cout << "\n----- Example 3: for loop as an increment counter with different steps -----" << endl;
    // print from 1 to 20 in a step of 3
    for (int m = 1; m <= 20; m += 3)
    {
        cout << m << "\t" << endl;
    }
    cout << endl;

    cout << "\n----- Example 4: for loop with conditional statement -----" << endl;
    // print all numbers, between -10 and 10, that are multiple of 3
    for (int p = -10; p <= 10; p++)
    {
        if (p % 3 == 0 && p != 0)
        {
            cout << p << "\t";
        }
    }
    cout << endl;

    cout << "\n----- Example 5: for loop with conditional statement -----" << endl;
    // cout all even numbers between 5 to 20
    int even_count = 0;
    for (int p = 5; p <= 20; p++)
    {
        if (p % 2 == 0 && p != 0)
        {
            even_count++;
        }
    }
    // print results
    cout << "there is/are" << even_count << "even numbers/s" << endl;

    cout << "\n----- Example 6: for loop with conditional statement -----" << endl;
    // add all negative numbers between -8 and 5
    int sum_negative = 0;
    int x = -8;
    for (x; x <= 5; x++)
    {
        if (x < 0)
        {
            sum_negative += x;
        }
    }
    // print result
    cout << "the total sum of negative numbers = " << sum_negative << endl;

    cout << "\n----- EXERCISE 1 -----" << endl;

    int multiple_of_2_count = 0;
    for (int i = 21; i >= -21; i -= 5)
    {
        cout << i << "\t";
        if (i % 2 == 0)
        {
            multiple_of_2_count++;
        }
    }
    cout << endl;
    cout << "Count of numbers that are multiples of 2 = " << multiple_of_2_count << endl;

    cout << "\n----- EXERCISE 2 -----" << endl;
    int user_input = 0;
    cout << "Enter an initial value ";
    cin >> user_input;
    if (user_input > 30)
    {
        cout << "Start value is greater than 30. The loop will not run." << endl;
    }
    else
    {
        cout << "Counting from " << user_input << " up to 30 in steps of 4:" << endl;
        for (int counter = user_input; counter <= 30; counter += 4)
        {
            cout << counter << "\t";
        }
        cout << endl;
    }

    return 0;
}