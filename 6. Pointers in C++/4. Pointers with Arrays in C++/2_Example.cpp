#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int numbers[5] = { 10,20,30,40,50 }; // Initialize an array of integers with 5 elements
    int* p; // Declare an integer pointer p
    p = numbers; // Initialize pointer p to point to the first element of the array

    cout << "Using Loops : " << endl;

    // Loop to print each element of the array using array indexing
    for (int n = 0; n < 5; n++) {
        cout << numbers[n] << " "; // Output the value of each element in the array
    }
    cout << endl;

    // Loop to print each element of the array using pointer indexing
    for (int n = 0; n < 5; n++) {
        cout << &numbers[n] << " "; // Output the memory address of each element in the array
    }
    cout << endl;

    // Loop to print each element of the array using pointer arithmetic and dereferencing
    for (int n = 0; n < 5; n++) {
        cout << *(p + n) << " "; // Output the value of each element in the array using pointer arithmetic
    }
    cout << endl;

    // Loop to print the memory address of each element using pointer arithmetic
    for (int n = 0; n < 5; n++) {
        cout << (p + n) << " "; // Output the memory address of each element using pointer arithmetic
    }
    cout << endl;

    cout << "Without Loops : " << endl;

    // Print each element of the array using array indexing without loop
    cout << numbers[0] << " " << numbers[1] << " " << numbers[2] << " " << numbers[3] << " " << numbers[4] << " " << endl;

    // Print each element of the array using pointer arithmetic and dereferencing without loop
    cout << *p << " " << *(p + 1) << " " << *(p + 2) << " " << *(p + 3) << " " << *(p + 4) << " " << endl;

    // Print the memory address of each element using array name and pointer arithmetic without loop
    cout << numbers << " " << numbers + 1 << " " << numbers + 2 << " " << numbers + 3 << " " << numbers + 4 << " " << endl;

    // Print the memory address of each element using pointer arithmetic without loop
    cout << p << " " << p + 1 << " " << p + 2 << " " << p + 3 << " " << p + 4 << " " << endl;

    _getch();
    return 0;
}