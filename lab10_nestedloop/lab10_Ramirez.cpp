/*
luis ramirez
oct 15, 2025
lab10, nested loop
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "\n----- example 1: nested loops-----" << endl;
    // each run of the outer loop, one complete cycle of an inner loop is run
    int I = 0;
    while (I < 3)
    {
        cout << "OUTER LOOP " << I;
        int J = 0;
        while (J < 5)
        {
            cout << "\tinner loop " << J << endl;
            J++;
        }
        cout << endl;
        I++;
    }

    cout << "\n----- example 2: cinema seating grid -----" << endl;
    int user_row;
    int seats;
    cout << "enter the numbers of rows: ";
    cin >> user_row;
    cout << "enter the number of seats: ";
    cin >> seats;

    for (int row = 1; row <= user_row; row++)
    {
        for (int s = 1; s <= seats; s++)
        {
            cout << "row " << row << " seat " << s << "\t";
        }
        cout << endl;
    }

    cout << "\n----- example 3: 2D graphing -----" << endl;
    int dimension = 9;
    for (int row = 1; row <= dimension; row++)
    {
        for (int col = 1; col <= dimension; col++)
        {
            if (col == 5 || row == 5)
                cout << " x ";
            else
                cout << " . ";
            cout << " . ";
        }
        cout << endl;
    }

    cout << "\n----- example 4: H graphing -----" << endl;
    dimension = 10;
    for (int row = 1; row <= dimension; row++)
    {
        for (int col = 1; col <= dimension; col++)
        {
            if ((4 >= col && col >= 3 && 8 >= row && row >= 3) || (col >= 5 && col <= 6 && row >= 5 && row <= 6) || (col >= 7 && col <= 8 && row >= 3 && row <= 8))

                cout << " % ";
            else
                cout << " . ";
        }
        cout << endl;


    }

    cout << "\n----- EXERCISE A -----" << endl;
      int sum=0, count=0;
    for (int n = 20; n> 0; n-=2){
        if (n%3 ==0){
            count++;
            continue;
        }
        sum += n;
    }
    cout<<"The sum is: "<<sum<<endl<<"The count is: "<<count<<endl;


    cout << "\n----- EXERCISE B -----" << endl;
    int i=0, add=0;
    while(i<=10){
        i++;
        if(i<5 && i !=2){   
            cout<<"i = "<<i<<endl;
            }
        else{continue;}
        add +=i;
    }
    cout<<"Add = "<<add<<endl;

    return 0;
}