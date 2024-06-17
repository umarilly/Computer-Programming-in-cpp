
// Square of every number in the array using function

#include<iostream>
#include<conio.h>

using namespace std;

void squareOfNumbers ( int arr[], int arraySize) {
    for ( int i = 0 ; i < arraySize ; i++ ) {
        cout << "The square of " << arr[i] << " is : " << arr[i] * arr[i] << endl;
    }
}

int main() {

    const int arraySize = 5;
	int arr [arraySize] = { 3, 7, 2, 4, 5 };

	squareOfNumbers(arr,arraySize);
	
	_getch();
	return 0;
}
