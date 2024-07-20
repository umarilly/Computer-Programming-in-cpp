
// Program to exaplain the use of pointers with character array 

#include<iostream> 
#include<conio.h> 

using namespace std;

int main() {
    char arr[] = "Hello World"; // Initialize a character array with the string "Hello World"
    int size = sizeof(arr) / sizeof(char); // Calculate the size of the array
    char* ptr; // Declare a pointer to char
    ptr = arr; // Point ptr to the start of the array

    // Display the complete character array directly
    cout << "Displaying the complete character array :-\n" << arr << endl;

    // Display the complete character array using array indexing
    cout << "Displaying the complete character array using array indexing :- " << endl;
    for (int i = 0; i < size; i++) { // Loop through each element of the array
        cout << arr[i]; // Print each character using array indexing
    }
    cout << endl;

    // Display the complete address of each element in the array using array indexing
    cout << "Displaying the complete address of array using array indexing :- " << endl;
    for (int i = 0; i < size; i++) { // Loop through each element of the array
        cout << (void*)&arr[i] << " "; // Print the address of each element by casting it to void*
    }
    cout << endl; 

    _getch();
    return 0; 
}