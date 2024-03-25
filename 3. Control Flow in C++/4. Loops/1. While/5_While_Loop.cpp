
#include<iostream> 
#include<conio.h>

using namespace std;

int main()
{
    
    char a;
    cout << "Would you like to have tea with me : ";
    cin >> a;

    while ((a == 'y') || (a == 'Y')) {
        cout << "Ok! then come";
        cin >> a;
    }

    cout << "Not a problem!";

    _getch();
    return 0;
}
