
#include<iostream> 
#include<conio.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number whose factorial you want to find : ";
    cin >> n;
    
    int i, f = 1;

    for (i = 2; i <= n; i++) {
        f = f * i;
    }

    cout << "The factorial of " << n << " is " << f << endl;

    _getch();
    return 0;
}
