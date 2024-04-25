
#include <iostream>
#include <conio.h>
using namespace std;
int main() {

    int abc[7] = {2,8,5,3,9,4,1};
    int i, j;
    int temp;

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            if (abc[j] > abc[j + 1]) {
                temp = abc[j];
                abc[j] = abc[j + 1];
                abc[j + 1] = temp;
            }
        }
    }

    cout << "The Sorted array is : ";
    for (i = 0; i < 7; i++)
        cout << abc[i] << " ";

    _getch();
    return 0;
}