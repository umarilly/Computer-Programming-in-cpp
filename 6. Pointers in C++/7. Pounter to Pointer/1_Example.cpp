
#include <iostream>
#include <conio.h>

using namespace std;

int main() {

    int a = 10;
    int *b;
    b = &a;
    int **c;

    cout << a << endl;
    cout << *b << endl;
    cout << &a << endl;
    cout << b << endl;
    cout << endl;

    c = &b;

    cout << b << endl;
    cout << *c << endl;
    cout << **c << endl;
    cout << &b << endl;
    cout << c << endl;

    _getch();
    return 0;
}