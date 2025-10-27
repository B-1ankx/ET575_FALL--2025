#include <iostream>
using namespace std;

int CollectNumbers(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    return n;
}

bool inOrder(int a, int b, int c){
    return (a > b && b > c);
    
}

void order_result(int n1, int n2, int n3, bool desc){
    char again;
    do {
        if (desc){
            cout<<"Numbers are in descending order."<<endl;
        } else {
            cout<<"Numbers are not in descending order."<<endl;
        }
        cout<<"Run program again? (y/n): ";
        cin>>again;
        if (again == 'y' || again == 'Y'){
            n1 = CollectNumbers();
            n2 = CollectNumbers();
            n3 = CollectNumbers();
            desc = inOrder(n1, n2, n3);
        }
    } while (again == 'y' || again == 'Y');
}

void runProgram(int num1, int num2, int num3, bool desc_order){
    order_result(num1, num2, num3, desc_order);
}

