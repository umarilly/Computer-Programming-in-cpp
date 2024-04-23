#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int arr[7] = {2,8,5,3,9,4,1};
	int i, j;  
	int index; // It is used to keep track the index of the smallest element in the unsorted portion
	int temp; // It is used for swapping

	for (i = 0; i < 6; i++) {
		
		index = i;

		for (j = i + 1; j < 7; j++) {
			if (arr[index] > arr[j]) {
				index = j;
			}
		}
		temp = arr[index];
		arr[index] = arr[i];
		arr[i] = temp;
	}

	cout << "\nThe Sorted array is : ";
	for (i = 0; i < 7; i++)
		cout << arr[i] << " ";

	_getch();
	return 0;
}