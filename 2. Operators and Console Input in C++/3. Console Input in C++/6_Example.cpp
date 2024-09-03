/*
    Program in C++ to calculate the circumference of a circle
*/

#include<iostream>  
#include<conio.h> 

using namespace std;

int main() {

    float radius;  // Variable to store the radius of the circle
    float pi = 3.14;  // Constant value of pi
    float circum;  // Variable to store the calculated circumference

    cout << "Enter radius: ";  // Prompt the user to enter the radius
    cin >> radius;  // Read the radius value from user input

    // Calculate the circumference using the formula: circumference = 2 * pi * radius
    circum = 2 * pi * radius; 

    // Display the calculated circumference
    cout << "Circumference of circle with radius " << radius << " is " << circum << endl;

    _getch(); 
    return 0;  
}