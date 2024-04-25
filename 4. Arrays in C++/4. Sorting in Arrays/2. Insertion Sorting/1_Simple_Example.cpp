#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int arr[6] = {2,8,5,3,9,4};
    int i;
    int ptr, temp;

    for (i = 1; i < 6; i++) {
        temp = arr[i]; 
        ptr = i - 1; 
        while ((ptr >= 0) && (temp < arr[ptr])) {
            arr[ptr + 1] = arr[ptr]; 

            ptr = ptr - 1; 
        }
        arr[ptr + 1] = temp;
    }

    cout << "The Sorted array is : ";
    for (i = 0; i < 6; i++)
        cout << arr[i] << " ";

    _getch();
    return 0;
}

