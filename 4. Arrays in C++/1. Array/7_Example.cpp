
// How to find Smallest Number

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a[10];
    int i, n;
    cout << "Enter the number of elements you want : ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Value at [" << i << "] = ";
        cin >> a[i];
    }
    cout << "\n--------------------------\n\n";
    for (i = 0; i < n; i++)
    {
        if (a[i] < a[0])
        {
            a[0] = a[i];
        }
    }
    cout << "Largest element is : " << a[0] << endl;

    _getch();
    return 0;
}
