
/*
    Program in C++ to take three values from the user and calculate the sum and average of those values.
*/

#include <iostream>  
#include <conio.h> 

using namespace std;

int main() {

    int a, b, c;  // Declare three integer variables to store user input values

    // Prompt the user to enter the first value and store it in variable 'a'
    cout << "Enter the first value : ";  
    cin >> a;

    // Prompt the user to enter the second value and store it in variable 'b'
    cout << "Enter the second value : ";  
    cin >> b;

    // Prompt the user to enter the third value and store it in variable 'c'
    cout << "Enter the third value : ";  
    cin >> c;

    // Calculate the sum of the three values
    int sum = a + b + c;  

    // Calculate the average of the three values. 
    // Use static_cast<double> to ensure the division operation is done in floating-point arithmetic
    double avg = static_cast<double>(sum) / 3;  

    // Output the calculated sum to the console
    cout << "The Sum is : " << sum << endl;  

    // Output the calculated average to the console
    cout << "The Average is : " << avg << endl;  

    _getch();  
    return 0;
}