#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    float a[5];

    a[0] = 9.9;
    a[1] = 12.9;
    a[2] = 13.1;
    a[3] = 8.9;
    a[4] = 10.6;

    for (int i = 0; i <= 4; i++)
        cout << " Value in a[" << i << "] =  " << a[i] << endl;
    _getch();
    return 0;
}
