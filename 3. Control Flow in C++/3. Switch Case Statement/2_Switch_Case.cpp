
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
            cout << "Excellent!" << endl;
            break;

        case 'B':
        case 'b':
            cout << "Good job!" << endl;
            break;

        case 'C':
        case 'c':
            cout << "Passed." << endl;
            break;

        case 'D':
        case 'd':
            cout << "Not so good." << endl;
            break;

        case 'F':
        case 'f':
            cout << "Failed." << endl;
            break;
            
        default:
            cout << "Invalid grade." << endl;
    }

    _getch();
    return 0;
}
