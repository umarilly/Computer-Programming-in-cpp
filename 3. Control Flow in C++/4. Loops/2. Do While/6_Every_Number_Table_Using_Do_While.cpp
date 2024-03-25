#include<iostream> 
#include<conio.h>
using namespace std;
int main()
{
    int a , b = 1, c;

    cout << "Enter a Number to find its Table ==> ";
    cin >> a;
    
    cout << "You asked for the table of : " << a << endl;
    do
    {
        c = a * b;
        cout << a << "x" << b << "=" << c << endl;
        b++;
    } while (b <= 10);
    _getch();
    return 0;
}
