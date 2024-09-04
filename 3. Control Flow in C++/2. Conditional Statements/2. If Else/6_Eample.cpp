
/*
    Program in C++ to calculate the telephone bill using if-else statement.
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    float calls, meter, rate, bill; //  Declaration of variables
    
    // Input from the user
    cout << "Enter the number of calls : ";
    cin >> calls;

    if (calls <= 100) {
        // This block will be executed only if the number of calls is less than or equal to 100.
        rate = 0.80;
        meter = 250;
    } else {
        // This block will be executed only if the number of calls is greater than 100.
        rate = 1.00;
        meter = 350;
    }

    bill = meter + (calls * rate); // Calculation of bill
    cout << "Your bill is : Rs. " << bill << endl; // Displaying the bill

    _getch();
    return 0;
}