
// program to subtract two fractions. The fractions are entered by the user in the form of numerator and denominator.

#include <iostream>
#include <conio.h>

using namespace std;

int main() {

    float a, b, c, d; 
    float f1, f2; 
    char q;                  

    cout << " Enter First Fraction : "; // For user Interaction or to make user friendly program.
    cin >> a >> q >> b;                 // Taking the values of Variables from user.

    cout << " Enter Second Fraction : "; // For user Interaction or to make user friendly program.
    cin >> c >> q >> d;                  // Taking the values of Variables from user.

    f1 = (a * d) - (b * c); 
    f2 = (b * d);

    cout << " Difference is : " << f1 << "/" << f2; // The Difference of Two fractions.

    _getch();
    return 0;
}