
/*
    Program in C++ to calculate the area of a right-angled triangle
*/

#include <iostream>  
#include <conio.h>   

using namespace std;

int main() {

    // Declare integer variables for base, height, and area. Initialize Area to 0.
    int Base, Height;
    int Area = 0;

    // Prompt the user to enter the base of the triangle
    cout << "Enter the value of Base : ";  
    cin >> Base;  // Read the base value from user input

    // Prompt the user to enter the height of the triangle
    cout << "Enter the value of Height : ";  
    cin >> Height;  // Read the height value from user input

    // Calculate the area of the right-angled triangle using the formula: (Base * Height) / 2
    Area = (Base * Height) / 2;  

    // Display the calculated area
    cout << "The Area of Right Angled Triangle is : " << Area << endl;

    _getch(); 
    return 0; 
}