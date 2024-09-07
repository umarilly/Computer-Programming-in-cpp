
#include<iostream>

using namespace std;
int main()
{

    int arr[10] = {1,2,3,4,5}; // Here the array is decleared and Initialized

    // To disply the array, we have to use loop

    int i = 0 ;
    while ( i < 5 ) {
        cout << arr[i] << " ";
        i++;
    }

	return 0;
}
