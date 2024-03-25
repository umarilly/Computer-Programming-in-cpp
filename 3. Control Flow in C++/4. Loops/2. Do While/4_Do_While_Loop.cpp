#include<iostream> 
#include<conio.h>
using namespace std;
int main()
{
    int i;
        do {
            cout << "Please input a number between 10 and 20 = ";
            cin >> i;
        } while (i < 10 || i > 20);

        cout << "You Entered over limit";

    _getch();
    return 0;
}
