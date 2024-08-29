
// C++ program to demonstrate different ways to initialize a structure

#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

// Define a structure to represent a Car
struct Car {
    string brand;  // Member variable to store the car's brand
    string model;  // Member variable to store the car's model
    int year;      // Member variable to store the car's manufacturing year
};

int main() {
    // Method 1: Default Initialization followed by assignment
    Car car1;
    car1.brand = "Toyota";  // Assign brand
    car1.model = "Camry";   // Assign model
    car1.year = 2022;       // Assign year

    // Method 2: Brace Initialization
    Car car2{"Honda", "Accord", 2023};  // Directly initialize using braces

    // Method 3: Constructor-style Initialization
    Car car3 = {"Ford", "Mustang", 2021};  // Initialize using constructor-style syntax

    // Display the details of the cars
    cout << "Car 1 : " << car1.brand << ", " << car1.model << ", " << car1.year << endl;
    cout << "Car 2 : " << car2.brand << ", " << car2.model << ", " << car2.year << endl;
    cout << "Car 3 : " << car3.brand << ", " << car3.model << ", " << car3.year << endl;

    _getch();
    return 0;
}