
#include<iostream>
#include<conio.h>

using namespace std;

void fun1 (int  arr1[], int arrSize1) {
	cout << "Enter the Elemets of the Array :- \n";
	for (int i = 0; i < 5; i++)
		cin >> arr1[i] ;

	cout << "The Elemets of the Array are :- \n";
	for (int i = 0; i < 5; i++)
		cout << arr1[i] << "  " ;
}
void fun2(int arr2[], int arrSize2) {
	cout << "Enter the Elemets of the Array :- \n";
	for (int i = 0; i < 5; i++)
		cin >> arr2[i];

	cout << "The Elemets of the Array are :- \n";
	for (int i = 0; i < 5; i++)
		cout << arr2[i] << "  ";
}
int main() {

    const int arrSize1 = 5;
	int arr1[arrSize1] ;

    const int arrSize2 = 5;
	int arr2[arrSize1];
	
	fun1(arr1,arrSize1);
	cout << "----------------------" << endl;
	fun2(arr2,arrSize2);

	_getch();
	return 0;
}
