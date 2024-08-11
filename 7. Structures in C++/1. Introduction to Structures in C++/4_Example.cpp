/*
    Program that demonstrates the use of a structure in C++ to store and display car details.
*/

#include <iostream> 
#include <conio.h>   
#include <string>   

using namespace std; 

// Define a structure named 'Car' to hold car details
struct Car {
    string make;      // Variable to store the brand of the car (e.g., Toyota, Honda)
    string model;     // Variable to store the model of the car (e.g., Corolla, Civic)
    int year;         // Variable to store the year of manufacture of the car
    float price;      // Variable to store the price of the car
};

int main() {
    // Create an instance of the 'Car' structure named 'c1'
    Car c1;
    
    // Assign values to the 'c1' instance variables
    c1.make = "Toyota";        // Set the make of the car to "Toyota"
    c1.model = "Corolla";      // Set the model of the car to "Corolla"
    c1.year = 2022;            // Set the year of the car to 2022
    c1.price = 25000.00;       // Set the price of the car to $25,000

    // Display the details of the first car
    cout << "1st Car Details :- " << endl;   
    cout << "Make : " << c1.make << endl;    
    cout << "Model : " << c1.model << endl; 
    cout << "Year : " << c1.year << endl;    
    cout << "Price : $" << c1.price << endl; 

    // Create and initialize another instance of the 'Car' structure named 'c2'
    Car c2 = { "Honda", "Civic", 1998, 32000.00 };

    // Display the details of the second car
    cout << "2nd Car Details :- " << endl;   
    cout << "Make : " << c2.make << endl;    
    cout << "Model : " << c2.model << endl;  
    cout << "Year : " << c2.year << endl;    
    cout << "Price : $" << c2.price << endl;

    _getch(); 
    return 0;  
}