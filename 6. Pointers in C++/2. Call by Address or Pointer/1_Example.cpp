#include<iostream>
#include<conio.h>

using namespace std;

void callByPointer(int* number) {
	*number = *number * *number * *number; // Dereferencing the pointer to modify the value of the variable it points to
    cout << "Inside callByPointer function, the cubed value is : " << *number << endl; // Printing the cubed value of the original number
    cout << "Inside callByPointer function, the memory address stored in the pointer is : " << number << endl; // Printing the memory address stored in the pointer
}

int main() {
    int number = 5;
	cout << "The value stored in number variable is : " << number << endl; // Printing the initial value of the variable 'number'
    cout << "The memory address of number variable is : " << &number << endl; // Printing the memory address of the variable 'number'
	callByPointer(&number);
    cout << "The new value stored in number variable is : " << number << endl; // Printing the modified value of the variable 'number' after the function call
    cout << "The memory address of number variable is still : " << &number << endl; // Printing the memory address of the variable 'number' to show it remains the same

    _getch();
    return 0;
}