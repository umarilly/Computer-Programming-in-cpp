
// Program to demonstrate passing a struct by value to a function

#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

// Define a struct to represent a Rectangle with length and width properties
struct Rectangle {
	int length; // Length of the rectangle
	int width;  // Width of the rectangle
};

// Function to display the properties of a Rectangle
void display(Rectangle R) {
	cout << "\n\n ===> The length of rectangle is : " << R.length << endl; 
	cout << " ===> The width of rectangle is : " << R.width << endl; 
    cout << "\n ===> The Area of rectangle is : " << R.length * R.width << endl; 
}

int main()
{
	Rectangle R;

	// Prompt user for input and store in Rectangle object
	cout << "\n ===> Enter the length of rectangle : ";
	cin >> R.length;
	cout << " ===> Enter width of rectangle : ";
	cin >> R.width;

	// Call display function to show Rectangle properties
	display(R);

	_getch();
	return 0;
}