/*
    Program to calculate the roots of a quadratic equation using the coefficients provided by the user.
    The program handles three cases:
    1. Real and unequal roots when the discriminant is greater than zero.
    2. Real and equal roots when the discriminant is zero.
    3. Complex (imaginary) roots when the discriminant is less than zero.
*/

#include <iostream>  // Include iostream library for input and output
#include <cmath>     // Include cmath library for mathematical functions
#include <conio.h>   // Include conio.h library for console input/output (specific to some compilers)

using namespace std;

int main() {
    float a, b, c;            // Coefficients of the quadratic equation
    float root1, root2;       // Variables to store the two roots
    float discriminant;       // Variable to store the discriminant value
    float realPart, imagPart; // Variables for real and imaginary parts of complex roots

    // Prompt the user to enter the coefficients of the quadratic equation
    cout << "Enter the coefficient a: ";  
    cin >> a;  // Get the value of 'a' from the user

    cout << "Enter the coefficient b: ";
    cin >> b;  // Get the value of 'b' from the user

    cout << "Enter the coefficient c: ";
    cin >> c;  // Get the value of 'c' from the user

    // Calculate the discriminant of the quadratic equation
    discriminant = b * b - 4 * a * c;

    // Check if the discriminant is greater than zero (Real and unequal roots)
    if (discriminant > 0) {
        cout << "Discriminant is: " << discriminant << endl;
        cout << "As the discriminant is greater than zero, the roots are real and unequal." << endl;

        // Calculate the two real roots using the quadratic formula
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        cout << "The first root of the quadratic equation is: " << root1 << endl;
        cout << "The second root of the quadratic equation is: " << root2 << endl;
    }
    // Check if the discriminant is equal to zero (Real and equal roots)
    else if (discriminant == 0) {
        cout << "Discriminant is: " << discriminant << endl;
        cout << "As the discriminant is equal to zero, the roots are real and equal." << endl;

        // Calculate the single repeated root
        root1 = -b / (2 * a);
        root2 = root1;

        cout << "The first root of the quadratic equation is: " << root1 << endl;
        cout << "The second root of the quadratic equation is: " << root2 << endl;
    }
    // If the discriminant is less than zero (Complex roots)
    else {
        cout << "Discriminant is: " << discriminant << endl;
        cout << "As the discriminant is less than zero, the roots are complex (imaginary) and unequal." << endl;

        // Calculate the real and imaginary parts of the complex roots
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);

        cout << "The first root of the quadratic equation is: " << realPart << " + " << imagPart << "i" << endl;
        cout << "The second root of the quadratic equation is: " << realPart << " - " << imagPart << "i" << endl;
    }

    _getch();  // Wait for a key press (specific to some compilers, not standard in C++)
    return 0;  // Return 0 to indicate successful program execution
}