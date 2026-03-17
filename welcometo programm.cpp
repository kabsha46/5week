#include <iostream>
using namespace std;
 
int main() {
    int choice;
 
    while (true) {
        cout << "\n=============================\n";
        cout << "         MAIN MENU           \n";
        cout << "=============================\n";
        cout << "  1. Say Hello               \n";
        cout << "  2. Say Goodbye             \n";
        cout << "  3. Exit                    \n";
        cout << "=============================\n";
        cout << "Enter your choice: ";

        cin >> choice;
 
        if (choice == 1) {
            cout << "\nHello! Welcome to the program.\n";
        } else if (choice == 2) {
            cout << "\nGoodbye! Have a nice day.\n";
        } else if (choice == 3) {
            cout << "\nExiting... See you next time!\n";
        } else {
            cout << "\nInvalid choice! Please enter 1, 2, or 3.\n";
        }
    }
 
    
}
 