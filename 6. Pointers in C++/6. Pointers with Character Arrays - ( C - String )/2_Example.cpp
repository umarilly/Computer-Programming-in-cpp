
// Program to exaplain the use of pointers with character array & pointer arithmetic

#include <iostream> 
#include <conio.h> 

using namespace std; 

int main() {
    char arr[] = "Hello World"; // Initialize a character array with the string "Hello World"
    int size = sizeof(arr) / sizeof(char); // Calculate the size of the array
    char *ptr; // Declare a pointer to char
    ptr = arr; // Point ptr to the start of the array

    // Display the complete character array using pointer arithmetic
    cout << "Displaying the complete character array using pointer arithmetic :- " << endl;
    for (int i = 0; i < size; i++) { // Loop through each element of the array
        cout << *(ptr++); // Print each character using pointer arithmetic
    }
    cout << endl; // Print a newline for better readability

    // Display the complete address of each element in the array using pointer arithmetic
    cout << "Displaying the complete address of array using pointer arithmetic :- " << endl;
    for (int i = 0; i < size; i++) { // Loop through each element of the array
        cout << (void *)(ptr++) << " "; // Print the address of each element by casting it to void*
    }
    cout << endl; // Print a newline for better readability

    _getch();
    return 0; 
}