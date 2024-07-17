
// Program to demonstrate the equivalence of pointer notation and array notation in modifying array elements, highlighting the differences in syntax and semantics between the two notations.

#include<iostream>
#include<conio.h>

using namespace std;

// Function to modify array elements using pointer notation
void pointerNotation(double* ptr, int size) {
    for (int j = 0; j < size; j++) {
        // Dereference the pointer, multiply the value by 2.54, and assign it back
        (*ptr) *= 2.54;  
        // Increment the pointer to point to the next element
        ptr++;       
    }
}

// Function to modify array elements using array notation
void arrayNotation(double ptr[], int size) {
	for (int j = 0; j < size; j++) {
	 // Multiply the array element by 2.54 and assign it back
	 ptr[j] = ptr[j] * 2.54;     
    }
}

int main() {
    // Define an array of doubles
	double arr[] = { 10.0, 43.1, 95.9, 59.7, 87.3 };
    // Calculate the size of the array
    int size = sizeof(arr)/sizeof(arr[0]);

    // Print the size of the array
    cout << "The Size if Array is : " << size  << "\n\n";

    // Print header for pointer notation results
    cout << "Result Using Pointer Notation :-" << "\n";
    // Call the pointerNotation function to modify the array
    pointerNotation(arr, size); 
	// Print the modified array elements
	for (int j = 0; j < size; j++) {
        cout << "arr["<< j << "] = " << arr[j] << " centimeters" << endl;
    }

    // Reset the array to its original values
    for (int j = 0; j < size; j++) {
        arr[j] = (j == 0) ? 10.0 : (j == 1) ? 43.1 : (j == 2) ? 95.9 : (j == 3) ? 59.7 : 87.3;
    }

    // Print header for array notation results
    cout << "\nResult Using Array Notation :-" << "\n";
    // Call the arrayNotation function to modify the array
    arrayNotation(arr, size); 
	// Print the modified array elements
	for (int j = 0; j < size; j++) {
        cout << "arr["<< j << "] = " << arr[j] << " centimeters" << endl;
    }

	// Wait for user input before exiting
	_getch();
	return 0;
}