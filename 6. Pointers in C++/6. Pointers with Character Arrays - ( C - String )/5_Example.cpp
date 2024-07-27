/*
    ---> The program demonstrates the use of pointers with a character array.
    ---> It displays the characters in sorted order and their memory addresses using pointer arithmetic.
*/

#include <iostream>
#include <conio.h>
#include <algorithm> // Include algorithm for sorting

using namespace std;

int main() {
    char arr[] = "AQTGFDUHGFCV"; // Initialize a character array with a string
    int size = sizeof(arr) / sizeof(char) - 1; // Calculate the size of the array excluding the null terminator
    char* ptr; // Declare a pointer to char
    ptr = arr; // Point ptr to the start of the array

    // Sort the character array
    sort(arr, arr + size);

    // Loop through the array and display each sorted character using pointer arithmetic
    cout << "Sorted characters: ";
    for (int i = 0; i < size; i++) {
        cout << *(ptr++); // Print each character and move the pointer to the next element
    }
    cout << endl;

    _getch();
    return 0;
}