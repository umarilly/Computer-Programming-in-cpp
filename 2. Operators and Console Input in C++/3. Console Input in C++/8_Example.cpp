
/*
    Program in C++ to calculate the distance covered by a person in a circular path
*/

#include<iostream>   
#include<conio.h>    

using namespace std;

int main() {

    // Declare variables to store circumference, number of rounds, radius, and distance
    double radius, circum, round;
    double distance;  
    const float pi = 3.14;  // Constant value for pi

    // Prompt the user to enter the radius of the circular path
    cout << "Enter the Radius of circle : ";  
    cin >> radius;  // Read the radius value from user input

    // Prompt the user to enter the number of rounds
    cout << "Number of rounds : ";  
    cin >> round;  // Read the number of rounds from user input

    // Calculate the circumference of the circle using the formula: circumference = 2 * pi * radius
    circum = 2 * pi * radius;

    // Calculate the total distance covered using the formula: distance = circumference * number of rounds
    distance = circum * round;

    // Display the calculated distance
    cout << "Distance covered by person is: " << distance << endl;

    _getch();  
    return 0; 
}