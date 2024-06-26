
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a;
    int *aPtr;
    a = 7;
    aPtr = &a;

    cout << "The address of a is " << &a << "\nThe value of aPtr is " << aPtr;
    cout << "\n\nThe value of a is " << a << "\nThe value of *aPtr is " << *aPtr;

    _getch();
    return 0;
}
