
/*
	Program in C++ to demonstrate the use of functions with arrays.
*/

#include<iostream>
#include<conio.h>

using namespace std;

// Function to display the elements of the array
void display (int marks[], int size) {
	cout << "The Elemets of the Array are :- \n";
	for (int i = 0; i < size; i++) {
		cout << marks[i] << endl;
	}
}

int main() {

	int marks[] = { 3,5,7,9,5 };
    int size = sizeof(marks)/sizeof(marks[0]);

	display(marks,size); // Passing the array to the function
	
	_getch();
	return 0;
}