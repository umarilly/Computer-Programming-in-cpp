
// Example to explain how pointers work with arrays, and How pointer arithmetic works.

#include <iostream> 
#include <conio.h>  

using namespace std;

int main()
{
    int numbers[] = {10, 20, 30, 40, 50}; // Initialize an array of integers with 5 elements
    int size = sizeof(numbers) / sizeof(numbers[0]); // Calculate the number of elements in the array
    int *p; // Declare an integer pointer p
    p = numbers; // Initialize pointer p to point to the first element of the array

    // Print each element of the array from index 0 to n
    for (int n = 0; n < size; n++) {
        cout << numbers[n] << " "; // Output the value of each element in the array
    }
    cout << endl;

    // Print the memory address of each element of the array from 0 to n
    for (int n = 0; n < size; n++) {
        cout << &numbers[n] << " "; // Output the memory address of each element in the array
    }
    cout << endl;

    // Print each element of the array using pointer dereferencing
    for (int n = 0; n < size; n++) {
        cout << p[n] << " "; // Output the value of each element in the array using the pointer
        // We can also use *(p+n) instead of p[n], as they both give same output.
    }
    cout << endl;

    // Print the memory address of each element using pointer arithmetic
    for (int n = 0; n < size; n++) {
        cout << (p + n) << " "; // Output the memory address of each element using pointer arithmetic
    }
    cout << endl;

    _getch(); 
    return 0;
}