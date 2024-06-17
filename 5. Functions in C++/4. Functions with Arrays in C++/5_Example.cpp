
// Finding the average of all the numbers In array using function

#include <iostream>
#include <conio.h>

using namespace std;

double average(int arraySize, const int inp_list[]) {
    double sum = 0.0;
    for (int i = 0; i < arraySize; i++)
        sum = sum + inp_list[i];

    return sum / arraySize;
}

int main() {

    const int arraySize = 5;
    int base[arraySize] = {3, 7, 2, 4, 5};
    double avg;

    avg = average(arraySize, base);

    cout << "The average of the numbers : ";
    for (int i = 0; i < arraySize; i++)
    {
        cout << base[i] << " ";
    }
    cout << " is : " << avg << endl;

    _getch();
    return 0;
}
