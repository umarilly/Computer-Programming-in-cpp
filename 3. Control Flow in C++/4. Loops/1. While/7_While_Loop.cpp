#include<iostream> 
#include<conio.h>

using namespace std;

int main()
{
    int value = 0;   // input value
    int max = 0;    // maximum value
    
    while (true)  // infinite loop
    {
        cout << "Enter a positive integer " << "(-1 to stop) : ";
        cin >> value;
        if (value > max)
            max = value;
        if (value <= 0)
            break;
    }
    
    cout << "The maximum value found is : " << max << endl;


    _getch();
    return 0;
}
