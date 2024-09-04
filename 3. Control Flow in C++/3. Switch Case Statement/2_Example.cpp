
/*
    Program in C++ that prompts the user to enter their grade and displays a message based on the grade entered.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {

    char grade;
    cout << "Enter your grade (A, B, C, D, or F) : ";
    cin >> grade;

    switch (grade) {
        case 'A':
        case 'a':
            // This block will be executed only if the value of grade is 'A' or 'a'.
            cout << "Excellent!" << endl;
            break;
        case 'B':
        case 'b':
            // This block will be executed only if the value of grade is 'B' or 'b'.
            cout << "Good job!" << endl;
            break;
        case 'C':
        case 'c':
            // This block will be executed only if the value of grade is 'C' or 'c'.
            cout << "Passed." << endl;
            break;
        case 'D':
        case 'd':
            // This block will be executed only if the value of grade is 'D' or 'd'.
            cout << "Not so good." << endl;
            break;
        case 'F':
        case 'f':
            // This block will be executed only if the value of grade is 'F' or 'f'.
            cout << "Failed." << endl;
            break;
        default:
            // This block will be executed only if the value of grade is not any of the above.
            cout << "Invalid grade." << endl;
    }

    _getch();
    return 0;
}