
/*
    Program in C++ to demonstrate the use of switch case statement.
*/

#include <iostream>
#include <conio.h>

using namespace std;


int main() {
    int choice;
    cout << "Enter a number (1-3) : ";
    cin >> choice;

    switch (choice) {
        case 1:
            // This block will be executed only if the value of choice is 1.
            cout << "You chose option 1" << endl;
            break;
        case 2:
            // This block will be executed only if the value of choice is 2.
            cout << "You chose option 2" << endl;
            break;
        case 3:
            // This block will be executed only if the value of choice is 3.
            cout << "You chose option 3" << endl;
            break;
        default:
            // This block will be executed only if the value of choice is not 1, 2, or 3.
            cout << "Invalid choice" << endl;
    }

    _getch();
    return 0;
}