#include <iostream>
#include <conio.h>
using namespace std;

int main() {

    int numbers[5] = {10, 20, 30, 40, 50};
    int *p;
    p = numbers;

    cout << *p;
    cout << endl;

    p = numbers + 1;
    cout << *p;
    cout << endl;

    p = numbers + 2;
    cout << *p;
    cout << endl;

    p = numbers + 3;
    cout << *p;
    cout << endl;

    p = numbers + 4;
    cout << *p;
    cout << endl;

    for (int n = 0; n < 5; n++)
        cout << numbers[n] << " ";

    _getch();
    return 0;
}