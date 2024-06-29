
// Program to double the value of the variable pointed to by the pointer

#include<iostream>
#include<conio.h>

using namespace std;

void doubleValue(int* ptr) {
    *ptr = *ptr * 2; // double the value of the variable pointed to by the pointer
}

int main() {

    int number = 10; // Initializing an integer variable
    cout << "Original value of number: " << number << endl; // Printing the initial value of the variable i.e., "10"

    doubleValue(&number); // Calling the function and passing the address of the variable

    cout << "Value of number after doubling: " << number << endl; // Printing the modified value of the variable i.e., "10"

    _getch();
    return 0;
}