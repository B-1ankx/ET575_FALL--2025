#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Input
    cout << "Enter first integer (a): ";
    cin >> a;
    cout << "Enter second integer (b): ";
    cin >> b;

    // Arithmetic Operations
    cout << "\nArithmetic Operations:" << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    if (b != 0) {
        cout << "a / b = " << a / b << endl;
        cout << "a % b = " << a % b << endl;
    } else {
        cout << "Division and modulus not defined (b = 0)." << endl;
    }

    // Assignment Operations
    a += 10;
    b -= 5;
    cout << "\nAssignment Operations:" << endl;
    cout << "Updated a (a += 10): " << a << endl;
    cout << "Updated b (b -= 5): " << b << endl;

    // Boolean (Logical) Operations
    cout << "\nBoolean (Logical) Operations:" << endl;
    cout << "Is a greater than b? " << (a > b) << endl;
    cout << "Is a equal to b? " << (a == b) << endl;
    cout << "Is a not equal to b? " << (a != b) << endl;
    cout << "Are both a and b positive? " << ((a > 0) && (b > 0)) << endl;
    cout << "Is either a or b negative? " << ((a < 0) || (b < 0)) << endl;
    cout << "Is a not greater than b? " << (!(a > b)) << endl;

    return 0;
}

// --- AI Assistant Used: PerplexityT ---
// Was the code correct? (Yes/No)
// Was it readable and properly commented?
// Were you able to explain each line of code?
// Did it use the same programming concepts we learned in class?
// Terminal Output: 

/*  
Enter first integer (a): 15
Enter second integer (b): 5
Arithmetic Operations:
a + b = 25
a - b = 5
a * b = 150
a / b = 1
a % b = 5
Assignment Operations:
Updated a (a += 10): 25 
Updated b (b -= 5): 5
Boolean (Logical) Operations:
Is a greater than b? 1
Is a equal to b? 0
Is a not equal to b? 1
Are both a and b positive? 1
Is either a or b negative? 0
Is a not greater than b? 0
--- END OF OUTPUT ---
*/