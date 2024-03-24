
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int a, b;
    cout << "Enter first number :  ";
    cin >> a;

    cout << "Enter second number :  ";
    cin >> b;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    // Swapping the values
    int temp = a;
    a = b;
    b = temp;

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    _getch();
    return 0;
}
