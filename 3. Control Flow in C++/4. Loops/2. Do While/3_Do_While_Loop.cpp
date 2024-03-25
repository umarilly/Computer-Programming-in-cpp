#include<iostream> 
#include<conio.h>
using namespace std;
int main()
{
    char ans;
    do
    {
        cout << "Would you help me ? ";
        cin >> ans;
    } 
    while (ans == 'y' || ans == 'Y');
    
    cout << "Great";

    _getch();
    return 0;
}
