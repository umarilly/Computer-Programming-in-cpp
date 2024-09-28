
/*
F   inding the maximum value in the array using function
*/

#include <iostream>
#include <conio.h>

using namespace std;

// Function to display the elements of the array
void display(int marks[], const int size) {
    cout << "Enter the elements of the array :\n";
    for (int i = 0; i < size; i++) {
        cin >> marks[i];
    }

    cout << "The elements of the array are:\n";
    for (int i = 0; i < size; i++) {
        cout << marks[i] << " ";
    }

    int max_value = marks[0];
    for (int i = 1; i < size; i++) {
        if (marks[i] > max_value) {
            max_value = marks[i];
        }
    }
    // Displaying the maximum value in the array 
    cout << "\nThe maximum value in the array is : " << max_value << endl;
}

int main() {
    const int size = 5; // Size of the array
    int marks[size]; // Array declaration
    display(marks, size); // Passing the array to the function
    
    _getch();
    return 0;
}