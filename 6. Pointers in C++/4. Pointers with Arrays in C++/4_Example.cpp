
#include <iostream>
#include <conio.h>

using namespace std;

int main() {

    int numbers[5];   // Declare an array of integers with 5 elements
    int *p;           // Declare an integer pointer
    p = numbers;      // Initialize pointer p to point to the first element of the array

    *p = 10;          // Assign the value 10 to the first element of the array
    cout << *p;       // Output the value of the first element
    cout << endl;

    p++;              // Increment the pointer to point to the next element in the array
    *p = 20;          // Assign the value 20 to the second element of the array
    cout << *p;       // Output the value of the second element
    cout << endl;

    p++;              // Increment the pointer to point to the next element in the array
    *p = 30;          // Assign the value 30 to the third element of the array
    cout << *p;       // Output the value of the third element
    cout << endl;

    p++;              // Increment the pointer to point to the next element in the array
    *p = 40;          // Assign the value 40 to the fourth element of the array
    cout << *p;       // Output the value of the fourth element
    cout << endl;

    p++;              // Increment the pointer to point to the next element in the array
    *p = 50;          // Assign the value 50 to the fifth element of the array
    cout << *p;       // Output the value of the fifth element
    cout << endl;

    // Loop to print each element of the array using array indexing
    for (int n = 0; n < 5; n++) {
        cout << numbers[n] << " ";  // Output the value of each element in the array
    }

    _getch();          // Wait for a key press
    return 0;
}