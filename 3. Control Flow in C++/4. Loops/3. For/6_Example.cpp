#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{

    int a, b = 1;

    for (a = 0; a <= 10; a++) {
        b = a * a * a;
        cout << "The cube of " << setw(3) << a << "  is " << setw(6) << b << endl;
    }

    // setw() function is used for proper spacing

    _getch();
    return 0;
}
