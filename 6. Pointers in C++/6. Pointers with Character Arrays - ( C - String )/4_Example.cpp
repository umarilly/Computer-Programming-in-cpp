
#include <iostream>
#include <conio.h>
#include <cstring> 

using namespace std;

int main()
{

    char firstArray[] = "Hello";
    int sizeOfFirstArray = sizeof(firstArray) / sizeof(char);
    char *ptrFirst;
    ptrFirst = firstArray;

    cout << "The First Character Array is : " << endl;
    for (int i = 0; i < sizeOfFirstArray; i++) {
        cout << *(ptrFirst++);
    }
    cout <<  endl;

    char secondArray[] = "World";
    int sizeOfSecondArray = sizeof(secondArray) / sizeof(char);
    char *ptrSecond;
    ptrSecond = secondArray;

    cout << "The Second Character Array is : " << endl;
    for (int i = 0; i < sizeOfSecondArray; i++) {
        cout << *(ptrSecond++);
    }
    cout <<  endl;

    char concatenatedArray[sizeof(firstArray) + sizeof(secondArray) - 1];
    strcpy(concatenatedArray, firstArray); 
    strcat(concatenatedArray, secondArray);

    cout << "The Concatenated Array is : " << concatenatedArray << endl; 

    _getch();
    return 0;
}