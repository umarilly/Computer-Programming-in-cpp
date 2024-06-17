
// Finding the average of all the numbers In array using function

#include <iostream>
#include <conio.h>

using namespace std;

void averageOfArrayElements(int arr[], int arraySize ) {

    cout << "The elements for the array are :- \n";
        for (int i=0; i<arraySize ; i++) {
        cout << arr[i] << " "; 
    }
    int sum = 0; 
    double average = 0.0;
    for (int i=0; i<arraySize ; i++) {
        sum = arr[i] + sum;
    }
    average = sum/arraySize;
    cout << "\nThe average is : " << average << endl;
}

int main() {

    const int arraySize = 5;
    int arr[arraySize] = {13, 17, 12, 14, 19};

    averageOfArrayElements(arr,arraySize);

    _getch();
    return 0;
}
