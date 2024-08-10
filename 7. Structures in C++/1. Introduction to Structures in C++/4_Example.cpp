
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

// Define a structure to hold car details
struct Car {
    string make;       // Brand of the car (e.g., Toyota, Ford)
    string model;      // Model of the car (e.g., Corolla, Mustang)
    int year;          // Year of manufacture
    float price;       // Price of the car

    // Function to display car details
    void displayDetails() {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {
    // Create an instance of the Car structure and initialize it
    Car car1;
    car1.make = "Toyota";
    car1.model = "Corolla";
    car1.year = 2022;
    car1.price = 25000.00;

    // Create another instance of the Car structure and initialize it
    Car car2 = {"Ford", "Mustang", 2021, 55000.00};

    // Display the details of the cars
    cout << "Car 1 Details:" << endl;
    car1.displayDetails();

    cout << "\nCar 2 Details:" << endl;
    car2.displayDetails();

    _getch();
    return 0;
}
