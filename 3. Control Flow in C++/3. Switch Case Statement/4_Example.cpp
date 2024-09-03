
/*
    Program in C++ that prompts the user to enter an account type ID (1 for PLS account, 2 for Current account, 3 for Joint account).
*/

#include <iostream> 
#include <conio.h>   

using namespace std;

int main() {
    int accountType;  // Variable to store the account type selected by the user

    // Display account options to the user
    cout << "Press 1 for PLS account\nPress 2 for Current account\nPress 3 for Joint account\n\n";

    // Prompt user to enter the account type ID
    cout << "Please enter your account type ID: ";
    cin >> accountType;  // Read the user's choice

    // Use a switch statement to determine the account type and display corresponding interest rate
    switch (accountType) {
        case 1:  // Case for PLS account with 10% interest rate
            cout << "====> Your Account Type: PLS\n";  // Display account type
            cout << "====> According to the bank, your interest rate is 10%.\n";  // Display interest rate
            break;

        case 2:  // Case for Current account with 8% interest rate
            cout << "====> Your Account Type: Current\n";  // Display account type
            cout << "====> According to the bank, your interest rate is 8%.\n";  // Display interest rate
            break;

        case 3:  // Case for Joint account with 5% interest rate
            cout << "====> Your Account Type: Joint\n";  // Display account type
            cout << "====> According to the bank, your interest rate is 5%.\n";  // Display interest rate
            break;

        default:  // Default case for invalid input
            cout << "Invalid account type ID entered. Please try again.\n";  // Display error message
            break;
    }

    _getch();  
    return 0; 
}