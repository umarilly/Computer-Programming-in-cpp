
// Program to order integers in ascending order using a swap function using pointers

#include<iostream>  // Include input-output stream library
#include<conio.h>  // Include console input-output library

using namespace std;  // Use standard namespace for convenience

// Function to order two integers in ascending order
void order(int* numb1, int* numb2)  {
	if (*numb1 > * numb2)  {  // Check if numb1 is greater than numb2
		 int temp = *numb1;  // Swap numb1 and numb2 using a temporary variable
		* numb1 = *numb2;
		* numb2 = temp;
	}	
}

int main() {
	// Declare and initialize two integer variables
	int n1 = 99, n2 = 11; 
	
	// Declare and initialize pointers to n1 and n2
    int* ptr1,* ptr2;
    ptr1 = &n1;  // ptr1 points to n1
    ptr2 = &n2;  // ptr2 points to n2
    
	// Call the order function to sort n1 and n2
	order(ptr1, ptr2); 
	
	// Print the ordered values of n1 and n2
	cout << "n1 = " << n1 << endl; 
	cout << "n2 = " << n2 << endl;

	// Declare and initialize two more integer variables
	int n3 = 75, n4 = 25; 
	
	// Declare and initialize pointers to n3 and n4
    int* ptr3,* ptr4;
    ptr3 = &n3;  // ptr3 points to n3
    ptr4 = &n4;  // ptr4 points to n4
    
	// Call the order function to sort n3 and n4
	order(ptr3, ptr4); 
	
	// Print the ordered values of n3 and n4
	cout << "\nn3 = " << n3 << endl;
	cout << "n4 = " << n4 << endl;

	_getch();  // Wait for a key press
	return 0;
}