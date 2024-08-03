/*
    Example to explain the pointer to pointer with functions
*/ 

#include <iostream>
#include <conio.h>

using namespace std;

// Function to modify the value pointed to by the pointer to pointer
void modifyValue(int** ptrToPtr) {
    **ptrToPtr = 20; // Set the value of the integer to 20
}

// Function to double the value of an integer using a pointer to pointer
void doubleValue(int** ptrToPtr) {
    **ptrToPtr *= 2; // Double the value of the integer
}

int main() {
    int value = 10;  // Initialize an integer variable with a value of 10
    int* ptr = &value;  // Create a pointer to the integer variable
    int** ptrToPtr = &ptr;  // Create a pointer to the pointer

    cout << "The Original value is: " << value << endl;  // Display the original value
    modifyValue(ptrToPtr);  // Call the function to modify the value
    cout << "The Modified value is: " << value << endl;  // Display the modified value
    doubleValue(ptrToPtr);  // Call the function to double the value
    cout << "The Doubled value is: " << value << endl;  // Display the doubled value

    _getch(); 
    return 0;  
}