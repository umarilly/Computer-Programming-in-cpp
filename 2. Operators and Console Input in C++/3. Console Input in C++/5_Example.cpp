/*
    Program to prove the Pythagoras theorem
*/

#include <iostream>   
#include <conio.h>    

using namespace std;

int main() {
    int a, b, c;  // Declare three integer variables a, b, and c to hold the sides of the triangle
    int leftHandSide, rightHandSide;  // Declare two integer variables to store the calculated squares

    cout << "Enter the value of a : "; // Prompt the user to enter the value of side 'a'
    cin >> a; // Read the user input for 'a'

    cout << "Enter the value of b : "; // Prompt the user to enter the value of side 'b'
    cin >> b; // Read the user input for 'b'

    cout << "Enter the value of c : "; // Prompt the user to enter the value of side 'c'
    cin >> c; // Read the user input for 'c'

    // Calculate the sum of squares of 'a' and 'b' (left side of the Pythagorean theorem)
    leftHandSide = (a * a) + (b * b); 

    // Calculate the square of 'c' (right side of the Pythagorean theorem)
    rightHandSide = (c * c);

    // Check if the Pythagorean theorem is satisfied
    if (leftHandSide == rightHandSide) {
        cout << "Pythagoras Theorem is Proved" << endl; // Output message if theorem is proved
    } else { 
        cout << "Pythagoras Theorem is not Proved" << endl; // Output message if theorem is not proved
    }

    _getch(); 
    return 0; 
}