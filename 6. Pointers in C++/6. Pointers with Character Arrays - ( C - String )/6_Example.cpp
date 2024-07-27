
/*
    ---> The program demonstrates the use of pointers with a character array.
    ---> It displays the characters in sorted order and their memory addresses using pointer arithmetic.
*/

#include <iostream>
#include <conio.h> 

using namespace std;

int main() {
    char arr[] = "The Last Kingdom"; // Initialize a character array with a string
    int size = sizeof(arr) / sizeof(char); // Calculate the size of the array
    char* ptr = arr + size - 2; // Point ptr to the last visible character of the array

    // Loop through the array and display each character in reverse using pointer arithmetic
    for (int i = size - 1; i > 0; i--) {
        cout << *ptr; // Print each character
        ptr--; // Move the pointer to the previous element
    }
    cout << endl;

    _getch();
    return 0; 
}