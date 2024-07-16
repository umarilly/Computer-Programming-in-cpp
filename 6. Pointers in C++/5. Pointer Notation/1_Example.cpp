
/*
    This program demonstrates the use of pointers to convert 
    an array of measurements from inches to centimeters.
    The conversion factor used is 2.54 (1 inch = 2.54 cm).
*/

#include <iostream> 
#include <conio.h> 

using namespace std; 

void centimeters(double *, int); // Function prototype for the centimize function

int main() {
    // Initialize an array of double values representing measurements in inches
    double varray[] = {10.0, 43.1, 95.9, 59.7, 87.3}; 
    int size = sizeof(varray) / sizeof(varray[0]); // Calculate the size of the array

    centimeters(varray, size); // Call the centimize function to convert values to centimeters

    // Loop to print each element of the array after conversion
    for (int j = 0; j < size; j++) {
        cout << "varray[" << j << "] = " << varray[j] << " centimeters" << endl; // Output the converted value
    }

    _getch(); 
    return 0; 
}

// Function to convert values in an array from inches to centimeters
void centimeters(double *varray, int size) {
    // Loop through each element of the array
    for (int j = 0; j < size; j++) {
        varray[j] *= 2.54; // Convert each value from inches to centimeters
    }
}