
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a, b = 0;
    
    for (a = 2; a <= 100; a = a + 2) {
        b = b + a;
    }

    cout << "The sum of even numbers from zero to hundrad is : " << b << endl;

    _getch();
    return 0;
}
