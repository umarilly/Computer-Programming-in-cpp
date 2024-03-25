#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int p, r, i = 2;

    cout << "Input a positive integer : ";
    cin >> p;

    cout << p << " is ";

    do
    {
        r = p % i;
        i++;
    } while (i < p && r != 0);

    if (i == p)
        cout << "a prime number";
    else {
        cout << "not a prime number\n";
        cout << " Thank you";
    }
    _getch();
    return 0;
}
