/*
    Program to find the square of a number using console input in C++
*/

#include <iostream>  
#include <conio.h> 

using namespace std;

int main() {

    int num;  // Declare an integer variable to store the user input

    // Prompt the user to enter a number
    cout << "Enter a number : ";  
    cin >> num;  // Read the number input by the user

    // Calculate the square of the number by multiplying it with itself
    int square = num * num;  

    // Display the square of the number
    cout << "Square of " << num << " is " << square << endl;

    getch();  
    return 0; 
}