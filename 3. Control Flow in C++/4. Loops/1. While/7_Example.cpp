
/*
    Program in C++ to demonstrate the use of the while loop.
*/

#include<iostream> 
#include<conio.h>

using namespace std;

int main()
{
    int value = 0;  
    int maximum = 0; 
    
    while (true) {
        cout << "Enter a positive integer (-1 to stop) : "; // Prompt the user to enter a positive integer
        cin >> value; // Read the value from the user
        if (value > maximum) {
            // If the value is greater than the maximum value found so far, update the maximum value
            maximum = value;
        } else if (value < 0) {
            // If the value is negative, stop the loop
            break;
        } else {
            cout << "Nothing in else block" << endl;
        }
    }
    
    cout << "The maximum value found is : " << maximum << endl;

    _getch();
    return 0;
}