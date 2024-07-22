
/*
    ---> The program demonstrates the use of pointers with a character array
    ---> Displaying the characters and their memory addresses using pointer arithmetic.
*/

#include<iostream>
#include<conio.h> 

using namespace std;

int main() {
    char arr[] = "Some people have the least leisure"; // Initialize a character array with a string
    int size = sizeof(arr) / sizeof(char); // Calculate the size of the array
    char* ptr; // Declare a pointer to char
    ptr = arr; // Point ptr to the start of the array

    // Loop through the array and display each character using pointer arithmetic
    for (int i = 0; i < size; i++) {
        cout << *(ptr++); // Print each character and move the pointer to the next element
    }
    cout << endl;

    // Loop through the array again and display the memory address of each character using pointer arithmetic
    for (int i = 0; i < size; i++) {
        cout << (void *)(ptr++) << " "; // Print the address of each element by casting it to void*
    }
    cout << endl;

    _getch();
    return 0; 
}