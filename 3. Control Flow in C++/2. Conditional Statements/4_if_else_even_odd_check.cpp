#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    
    int num;
    cout << "Enter a number : ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "It is an even number";
    }
    else {
        cout << "It is an odd number ";
    }

    _getch();
    return 0;
}
