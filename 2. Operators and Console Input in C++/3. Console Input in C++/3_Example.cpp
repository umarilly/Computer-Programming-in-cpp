
/*
    Program in C++ to swap two numbers using a temporary variable and without using a temporary variable.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {

    int firstNumber, secondNumber;  // Declare variables for storing numbers

    // Prompt the user to enter the first number & read the first number from the user input
    cout << "Enter the first number: ";  
    cin >> firstNumber; 

    // Prompt the user to enter the second number & read the second number from the user input
    cout << "Enter the second number: ";  
    cin >> secondNumber;

    // Display the values before swapping
    cout << "Before swapping: firstNumber = " << firstNumber << ", secondNumber = " << secondNumber << endl;

    // Swapping the values using a temporary variable
    int temp = firstNumber;  
    firstNumber = secondNumber;
    secondNumber = temp;

    // Display the values after swapping
    cout << "After swapping: firstNumber = " << firstNumber << ", secondNumber = " << secondNumber << endl;

    cout << "\n---------------------------------------------\n" << endl;

    int num1, num2;  // Declare another set of variables for demonstrating swapping without a temporary variable

    // Prompt the user to enter the first number & read the first number from the user input
    cout << "Enter the first number: ";  
    cin >> num1; 

    // Prompt the user to enter the second number & read the second number from the user input
    cout << "Enter the second number: ";  
    cin >> num2; 

    // Display the values before swapping
    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    // Swapping the values without using a temporary variable
    num1 = num1 + num2;  
    num2 = num1 - num2;  
    num1 = num1 - num2; 

    // Display the values after swapping
    cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    _getch();  // Wait for a key press before closing the console window
    return 0;
}