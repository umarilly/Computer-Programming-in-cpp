
/*
    Program to multiply elements of an integer array, a float array, and a double array using function overloading and pointers.
*/

#include <iostream>  
#include <conio.h>  

using namespace std; 

// Function to multiply elements of an integer array
void multiply(int* a, int length) {
    int result = 1; // Initialize result for multiplication
    for (int i = 0; i < length; i++) { // Loop through all elements in the array
        cout << a[i] << "*"; // Print each element followed by '*'
        result *= a[i]; // Multiply each element and store in result
    }
    cout << "\b=" << result << endl; // Print the final result; \b is used to move the cursor back by one character to remove the last '*'
}

// Function to multiply elements of a double array
void multiply(double* a, int length) {
    double result = 1.0; // Initialize result for multiplication
    for (int i = 0; i < length; i++) { // Loop through all elements in the array
        cout << a[i] << "*"; // Print each element followed by '*'
        result *= a[i]; // Multiply each element and store in result
    }
    cout << "\b=" << result << endl; // Print the final result
}

// Function to multiply elements of a float array
void multiply(float* a, int length) {
    float result = 1.0f; // Initialize result for multiplication
    for (int i = 0; i < length; i++) { // Loop through all elements in the array
        cout << a[i] << "*"; // Print each element followed by '*'
        result *= a[i]; // Multiply each element and store in result
    }
    cout << "\b=" << result << endl; // Print the final result
}

int main() {
    // Arrays to store different types of numbers
    int intArray[] = { 1, 2, 3 }; // Array of integers
    float floatArray[] = { 1.2f, 4.5f, 5.5f }; // Array of floats
    double doubleArray[] = { 4.555, 3.112, 6.776 }; // Array of doubles

    // Function calls for different data types
    multiply(intArray, sizeof(intArray) / sizeof(intArray[0])); // Call multiply for integers
    multiply(floatArray, sizeof(floatArray) / sizeof(floatArray[0])); // Call multiply for floats
    multiply(doubleArray, sizeof(doubleArray) / sizeof(doubleArray[0])); // Call multiply for doubles

    _getch(); // Wait for user input before closing the console window
    return 0;
}