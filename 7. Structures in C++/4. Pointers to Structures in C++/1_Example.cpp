
/*
    Program that demonstrates the use of a pointer to a structure in C++ to store and display car details.
*/

#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

// Define a structure to represent a Car
struct Car {
    string brand;  // Member variable to store the brand of the car
    int year;      // Member variable to store the year of manufacture
};

int main() {
    // Initialize a Car structure
    Car myCar = {"Toyota", 2021};

    // Declare a pointer to the Car structure
    Car *carPtr = &myCar;

    // Access and display the members of the structure using the pointer and the arrow operator
    cout << "Car Brand: " << carPtr->brand << endl;
    cout << "Year of Manufacture: " << carPtr->year << endl;

    _getch();
    return 0;
}
