
// This program demonstrates the use of pointers in C++ to convert inches to centimeters
// It also illustrates the concept of pass-by-reference in function calling

#include<iostream> 
#include<conio.h>  

using namespace std;  // Use standard namespace for convenience

void centimeters(double* ptr) {  // Define function to convert inches to centimeters
    *ptr *= 2.54;       // Multiply the value pointed to by ptr by conversion factor
}

int main() {  
    double var = 10.0;  // Declare and initialize variable var
    double* ptr;       // Declare pointer ptr
    ptr = &var;        // Assign address of var to ptr

    cout << "In Inches : " << var << " inches" << endl;  // Print initial value in inches
    centimeters(ptr);  // Call function to convert inches to centimeters
    cout << "In Centimeters : " << var << " centimeters" << endl;  // Print converted value in centimeters

    _getch(); 
    return 0;   
}