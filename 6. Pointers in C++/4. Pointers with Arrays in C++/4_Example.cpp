
#include <iostream>
#include <conio.h>

using namespace std;

int main() {

    int numbers[5];
    int *p;
    p = numbers; 

    *p = 10;
    cout << *p;
    cout << endl;

    p++;
    *p = 20;
    cout << *p;
    cout << endl;

    p++;
    *p = 30;
    cout << *p;
    cout << endl;

    p++;
    *p = 40;
    cout << *p;
    cout << endl;

    p++;
    *p = 50;
    cout << *p;
    cout << endl;

    for (int n = 0; n < 5; n++) {
        cout << numbers[n] << " ";
    }

    _getch();
    return 0;
}