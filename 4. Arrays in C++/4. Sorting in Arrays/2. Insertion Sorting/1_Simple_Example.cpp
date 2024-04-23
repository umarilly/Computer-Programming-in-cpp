
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int abc[5] = {2, 4, 1, 5, 3};
    int i;
    int ptr, temp;

    for (i = 1; i < 5; i++)
    {
        temp = abc[i];
        ptr = i - 1;
        while ((temp < abc[ptr]) && (ptr != -1))
        {
            abc[ptr + 1] = abc[ptr];
            ptr = ptr - 1;
        }
        abc[ptr + 1] = temp;
    }

    cout << "The Sorted array is : ";
    for (i = 0; i < 5; i++)
        cout << abc[i] << " ";

    _getch();
    return 0;
}
