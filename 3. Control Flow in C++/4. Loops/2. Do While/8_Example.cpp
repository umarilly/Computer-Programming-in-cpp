
/*
    Program in C++ to convert temperature from Fahrenheit to Celsius using do-while loop.
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main() {
    char userChoice;
    float fahrenheitTemperature;
    float celsiusTemperature;

    do {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> fahrenheitTemperature;
        celsiusTemperature = 5 * (fahrenheitTemperature - 32) / 9; // Conversion formula
        cout << "The temperature in Celsius is: " << celsiusTemperature << endl; // Displaying the result
        cout << "Press 'y' to continue or 'n' to stop: "; // Asking user if he wants to continue
        cin >> userChoice;
    } while (userChoice != 'n');

    _getch();
    return 0;
}