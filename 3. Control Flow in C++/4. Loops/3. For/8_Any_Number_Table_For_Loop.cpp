#include<iostream> 
#include<conio.h>
using namespace std;
int main()
{
    int a,b=1,c;
    cout << "Enter the number whose table you want to find : ";
    cin >> a;
    for (; b <= 10; b++)
    {
        c = a * b;
        cout << a << "x" << b << "=" << c << endl;
    }
    _getch();
    return 0;
}
