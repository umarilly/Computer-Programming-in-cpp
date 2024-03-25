#include<iostream> 
#include<conio.h>
using namespace std;
int main()
{
    int a=2, b=1, c;
    
    do
    {
        c = a * b;
        cout << a << "x" << b << "=" << c << endl;
        b++;
    } 
    while (b <= 10);
    _getch();
    return 0;
}
