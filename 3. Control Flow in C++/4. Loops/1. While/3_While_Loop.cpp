#include<iostream> 
#include<conio.h>

using namespace std;

int main() {

    int x = 5;

    while (x >= 0)  {
        
        if (x >= 2)  {
            cout << "Value of x is : " << x << endl;
        }
    
        x = (x-1);
    }
    _getch();
    return 0;
}