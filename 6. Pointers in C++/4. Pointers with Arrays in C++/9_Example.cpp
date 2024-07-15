#include <iostream>   
#include <conio.h>   

using namespace std;

int main() {

    int numbers[5] = {10, 20, 30, 40, 50}; // Initialize an array of integers with 5 elements
    int size = sizeof(numbers)/sizeof(numbers[0]); // Calculate the size of the array
    int* p;        // Declare an integer pointer
    p = numbers;   // Initialize the pointer to point to the first element of the array

    /*
        Methods to display the values of array using pointer arithmetic and array index
    */

    for (int n = 0; n < size; n++) {
        cout << numbers[n] << " ";  // Print each element using array indexing
    }
    cout << endl;

    for (int n = 0; n < size; n++) {
        cout << *(p + n) << " ";    // Print each element using pointer arithmetic
    }
    cout << endl;

    for (int n = 0; n < size; n++) {
        cout << *(p++) << " ";      // Print each element by incrementing the pointer directly
    }
    cout << endl;

    p = numbers; // Reset the pointer to the beginning of the array
    
    for (int n = 0; n < size; n++) {
        cout << *(p = &numbers[n]) << " "; // Print each element by setting the pointer to each element's address
    }
    cout << endl;

    _getch(); 
    return 0; 
}