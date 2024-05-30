#include<iostream>
#include<conio.h>

using namespace std;

double maximum (double, double, double); 

int main() {

	double number1, number2, number3;
	
	cout << "Enter the first numbers : ";
	cin >> number1 ;
	cout << "Enter the second numbers : ";
	cin >>  number2 ;
	cout << "Enter the third numbers : ";
	cin >> number3;

	double max = maximum(number1, number2, number3);

	cout << "Maximum is : " << max << endl;
	
	_getch();
	return 0; 
}

double maximum(double x, double y, double z) {

	double maximum;

	if (x > y && x > z) {
        maximum = x;
    }
    else if ( y > x && y > z ) {
        maximum = y;
    }
    else {
        maximum = z;
    }

    return maximum;
}
