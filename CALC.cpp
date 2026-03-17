#include <iostream>
using namespace std;
 
 main() {
    int choice;
    double num1, num2;
 
    while (true) {
        
        cout << "\n==============================\n";
        cout << "       SIMPLE CALCULATOR      \n";
        cout << "==============================\n";
        cout << "  1. Addition                 \n";
        cout << "  2. Subtraction              \n";
        cout << "  3. Multiplication           \n";
        cout << "  4. Division                 \n";
        cout << "  5. Clear Screen             \n";
        cout << "  6. Exit                     \n";
        cout << "==============================\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 6) {
            cout << "\nExiting Calculator. Goodbye!\n";
            
        }
        if (choice == 5) {
            #ifdef _WIN32
                system("cls");
            #else
                system("clear");
            #endif
            cout << "Screen cleared.\n";
            continue;
        }
        if (choice < 1 || choice > 6) {
            cout << "\nInvalid choice! Please enter a number between 1 and 6.\n";
            continue;
        }
        cout << "Enter first number:  ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
        if (choice == 1) {
            cout << "\nResult: " << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
 
        } else if (choice == 2) {
            cout << "\nResult: " << num1 << " - " << num2 << " = " << num1 - num2 << "\n";
 
        } else if (choice == 3) {
            cout << "\nResult: " << num1 << " x " << num2 << " = " << num1 * num2 << "\n";
 
        } else if (choice == 4) {
            if (num2 == 0) {
                cout << "\nError! Division by zero is not allowed.\n";
            } else {
                cout << "\nResult: " << num1 << " / " << num2 << " = " << num1 / num2 << "\n";
            }
        }
    }
 
}
 