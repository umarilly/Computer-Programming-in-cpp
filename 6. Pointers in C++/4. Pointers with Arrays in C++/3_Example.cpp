
// Example to compare the normal integer variable with pointers and arrays with pointers

#include<iostream>
#include<conio.h>

using namespace std;

// Comments will show the normal integer variable work flow

int main() {

	int numbers [] = {1,2,3};    // int a = 1;
	int* p;                     // int *p;
	p = numbers;               // int p=&a;    

    int size = sizeof(numbers)/sizeof(numbers[0]);
	
	for (int n = 0; n < size; n++) {
		cout << numbers[n] << " ";      // cout << a << " "; 
    }
	
	_getch();
	return 0;
}