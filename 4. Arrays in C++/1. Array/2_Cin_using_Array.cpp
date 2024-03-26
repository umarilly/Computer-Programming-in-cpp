
#include<iostream>
#include<conio.h>

using namespace std;
int main()
{

    int arr[5];

    cout << "Please enter the elements of array : " << endl;
    for ( int i = 0 ; i < 5 ; i++) {
        cout << "\nPlease Enter : ";
        cin >> arr[i];
        cout << "At index " << i << " the element is : " << arr[i] << endl;
    }

    // Now display the array

    int j = 0 ;
    cout << "\nThe Array is : ";
    while ( j < 5 ) {
        if ( j < 4 ) {
            cout << arr[j] << " , ";
        } else {
                cout << arr[j];
        }
        j++;
    }

    _getch();
	return 0;
}
