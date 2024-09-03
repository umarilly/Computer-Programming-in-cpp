#include<iostream>   
#include<conio.h>       

using namespace std;

int main() {
    
    int sequenceLength;
    cout << "Enter the length of the Fibonacci sequence : ";
    cin >> sequenceLength;

    int fibonacci[sequenceLength];  // Array to store Fibonacci numbers
    int index;                      // Variable to iterate over the array

    // Loop to compute the Fibonacci sequence
    for (index = 0; index < sequenceLength; index++) {
        // Initialize the first two numbers of the sequence
        if (index == 0) {
            fibonacci[index] = 0;   // Fibonacci number at position 0 is 0
        } else if (index == 1) {
            fibonacci[index] = 1;   // Fibonacci number at position 1 is 1
        } else {
            // Compute the next Fibonacci number as the sum of the two preceding numbers
            fibonacci[index] = fibonacci[index - 1] + fibonacci[index - 2];
        }
    }

    cout << "The Fibonacci Series is as follows: \n\n"; // Print header message

    // Loop to display the Fibonacci sequence
    for (index = 0; index < sequenceLength; index++) {
        cout << "The Fibonacci sequence at position " << index << " = " << fibonacci[index] << endl;
    }

    _getch();  
    return 0;  
}