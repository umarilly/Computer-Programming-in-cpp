/*
    ---> This program counts the number of vowels in a user-provided string using pointer arithmetic.
*/

#include <iostream> 
#include <conio.h>  
using namespace std; // Use the standard namespace

const int size = 50; // Define a constant for the maximum size of the input string

int main() {
    char str[size]; // Declare a character array to hold the input string
    cout << "Please enter the string : "; // Prompt the user to enter a string
    cin.getline(str, size); // Read a line of input from the user into the array

    char* ptr = str; // Initialize a pointer to the start of the character array
    int vowelCount = 0; // Initialize a variable to count the number of vowels

    // Loop through the character array until the end of the string is reached
    while (*ptr != '\0') {
        // Check if the current character is a vowel (both uppercase and lowercase)
        if (*ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U' ||
            *ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u') {
            vowelCount++; // Increment the vowel count if a vowel is found
        }
        ptr++; // Move the pointer to the next character
    }

    cout << "The number of vowels in the string is : " << vowelCount << endl; // Output

    _getch();
    return 0;
}