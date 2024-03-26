
#include<iostream> 
#include<conio.h>

using namespace std;

int main()
{
    int a, b = 1;

    for (a = 0; a <= 100; a++) {
        b = a * a;
        cout << "The square of " << a << " is " << b << endl;
    }

    _getch();
    return 0;
}
