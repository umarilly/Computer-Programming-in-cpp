
#include<iostream> 
#include<conio.h>
using namespace std;
int main()
{
    int a,b=1,c;
    
    for (a = 2; b <= 10; b++)
    {
        c = a * b;
        cout << a << "x" << b << "=" << c << endl;
    }
    _getch();
    return 0;
}
