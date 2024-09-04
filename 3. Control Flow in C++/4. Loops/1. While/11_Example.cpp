
/*
    Program in C++ to create a simple calculator using a while loop, if-else statements, and switch-case.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int num1, num2;       
    int operationChoice; 

    while (true) {  // Infinite loop to keep the program running until the user chooses to exit

        system("cls");    // Clear the screen at the start of each loop iteration

        cout << "Enter the first number : ";
        cin >> num1;
        cout << "Enter the second number : ";
        cin >> num2;

        // Display menu options
        cout << "\nPress 1 for addition\n";
        cout << "Press 2 for subtraction\n";
        cout << "Press 3 for multiplication\n";
        cout << "Press 4 for division\n";
        cout << "Press 5 for modulus\n";
        cout << "Press 6 to exit the program\n\n";

        cout << "Enter your choice : ";
        cin >> operationChoice;

        system("cls");    // Clear the screen before showing the result

        // Switch case for operation selection
        switch (operationChoice) {
            case 1:
                cout << "Addition result : " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Subtraction result : " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Multiplication result : " << num1 * num2 << endl;
                break;
            case 4:
                if (num2 != 0) {
                    cout << "Division result : " << num1 / num2 << endl;
                } else {
                    cout << "Error: Division by zero is not allowed" << endl;
                }
                break;
            case 5:
                if (num2 != 0) {
                    cout << "Modulus result : " << num1 % num2 << endl;
                } else {
                    cout << "Error: Modulus by zero is not allowed" << endl;
                }
                break;
            case 6:
                exit(0); 
                break;
            default:
                cout << "Invalid entry. Please try again." << endl;
        }
        _getch();  // Wait for the user to press a key before clearing the screen again
    }

    return 0;
}