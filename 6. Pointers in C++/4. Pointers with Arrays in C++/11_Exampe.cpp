
/*
    Program in C++ to print each character of a string with a space using a pointer.
*/

#include <iostream>
#include <conio.h>  
#include <cstring> 

using namespace std;

int main() {
    // Declaring and initializing a character array
    char array[50] = "I'm going to Turkey this year";
    const char* str = array;  // Pointer to the character array

    // Loop through the string and print each character followed by a space
    for (int i = 0; i < strlen(str); i++) {
        cout << *(str + i) << " ";  // Print each character with a space
    }

    _getch();  // Wait for user input before closing
    return 0;
}