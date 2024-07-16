
#include <iostream>
#include <conio.h>

using namespace std;

void centimize(double *);
const int MAX = 5;

int main() {
    double varray[MAX] = {10.0, 43.1, 95.9, 59.7, 87.3};
    centimize(varray);
    for (int j = 0; j < MAX; j++) {
        cout << "varray[" << j << "] = " << varray[j] << " centimeters" << endl;
    }

    _getch();
    return 0;
}

void centimize(double *ptrd) {
    for (int j = 0; j < MAX; j++)
        *ptrd++ = *ptrd * 2.54;
}