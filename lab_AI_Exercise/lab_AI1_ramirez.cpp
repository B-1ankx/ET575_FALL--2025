#include <iostream>
using namespace std;

int main() {
    double a, b; // Using double to support floating-point numbers
    char choice;

    do {
        // Input from the user
        cout << "\n===============================" << endl;
        cout << "Enter two numbers (a and b):" << endl;
        cout << "a = ";
        cin >> a;
        cout << "b = ";
        cin >> b;

        // Arithmetic Operations
        cout << "\n=== Arithmetic Operations ===" << endl;
        cout << "a + b = " << a + b << endl;
        cout << "a - b = " << a - b << endl;
        cout << "a * b = " << a * b << endl;

        if (b != 0) {
            cout << "a / b = " << a / b << endl;
        } else {
            cout << "Division by zero is not allowed." << endl;
        }

        // Modulus is only valid with integers
        if (static_cast<int>(b) != 0) {
            cout << "a % b = " << static_cast<int>(a) % static_cast<int>(b) << " (using integer cast)" << endl;
        } else {
            cout << "Modulus by zero is not allowed." << endl;
        }

        // Assignment Operations
        double a_updated = a;
        double b_updated = b;
        a_updated += 10;
        b_updated -= 5;
        cout << "\n=== Assignment Operations ===" << endl;
        cout << "a after a += 10: " << a_updated << endl;
        cout << "b after b -= 5: " << b_updated << endl;

        // Boolean (Logical) Operations
        cout << "\n=== Boolean (Logical) Operations ===" << endl;
        cout << "Is a > b? " << (a > b ? "true" : "false") << endl;
        cout << "Is a == b? " << (a == b ? "true" : "false") << endl;
        cout << "Is a != b? " << (a != b ? "true" : "false") << endl;
        cout << "Are both a and b positive? " << ((a > 0 && b > 0) ? "true" : "false") << endl;
        cout << "Is either a or b negative? " << ((a < 0 || b < 0) ? "true" : "false") << endl;
        cout << "Is a NOT greater than b? " << (!(a > b) ? "true" : "false") << endl;

        // Ask user if they want to try again
        cout << "\nDo you want to perform another operation? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
/*
was the code correct? yes 
was it readable? yes
were you able to explain each line of code?  some of the lines not all
did it use the same programming concept we learned in class? it did use some of the programming concepts 
we learned in class but it also used some new ones that we have not learned yet.

terminal output:
===============================
--- AI Assistant Used: ChatGPT ---
Enter two numbers (a and b):
a = 15
b = 5
=== Arithmetic Operations ===
a + b = 25
a - b = 5
a * b = 150
a / b = 1.5
a % b = 5 (using integer cast)
=== Assignment Operations ===
a after a += 10: 25
b after b -= 5: 5
=== Boolean (Logical) Operations ===
Is a > b? true
Is a == b? false
Is a != b? true
Are both a and b positive? true
Is either a or b negative? false
Is a NOT greater than b? false
Do you want to perform another operation? (y/n):
*/