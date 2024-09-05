/*
    Program in C++ to find the factorial of a number using a for loop.
*/

#include<iostream> 
#include<conio.h>

using namespace std;

int main()
{
    int number;
    cout << "Enter the number whose factorial you want to find: ";
    cin >> number;
    
    int factorial = 1; 

    for (int i = 2; i <= number; i++) {
        // Multiply the current value of factorial with the current value of i
        factorial *= i;
    }

    // Display the factorial of the number
    cout << "The factorial of " << number << " is " << factorial << endl;

    _getch();
    return 0;
}