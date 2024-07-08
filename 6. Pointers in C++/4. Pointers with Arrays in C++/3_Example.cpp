
// Example to compare the normal integer variable with pointers and arrays with pointers

#include<iostream>
#include<conio.h>

using namespace std;

// Comments will show the normal integer variable workflow

int main() {
    int numbers[] = {1, 2, 3};  // Initialize an array of integers with 3 elements
    int* p;                     // Declare an integer pointer p
    p = numbers;                // Initialize pointer p to point to the first element of the array

    int size = sizeof(numbers) / sizeof(numbers[0]); // Calculate the number of elements in the array

    // Loop to print each element of the array using array indexing
    for (int n = 0; n < size; n++) {
        cout << numbers[n] << " ";  // Equivalent to: int a = 1; cout << a << " ";
    }
    cout << endl;

    // Loop to print the memory address of each element in the array using array indexing
    for (int n = 0; n < size; n++) {
        cout << &numbers[n] << " ";  // Equivalent to: int a = 1; cout << &a << " ";
    }
    cout << endl;

    // Loop to print each element of the array using pointer arithmetic and dereferencing
    for (int n = 0; n < size; n++) {
        cout << *(p + n) << " ";  // Equivalent to: int *p = &a; cout << *p << " ";
    }
    cout << endl;

    // Loop to print the memory address of each element using pointer arithmetic
    for (int n = 0; n < size; n++) {
        cout << (p + n) << " ";  // Equivalent to: int *p = &a; cout << p << " ";
    }
    cout << endl;

    _getch();
    return 0;
}