#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

    int i, j;

    int index_ch, temp;

    const int size = 10;
    int abc[size];

    cout << "Enter the Elements of the Array :- \n\n";

    for (i = 0; i < size; i++)
    {
        cout << "The Element at index [" << i << "] is : ";
        cin >> abc[i];
    }

    cout << "\n";

    cout << "The Elements you entered in the Array are :- \n";

    for (i = 0; i < size; i++)
    {
        cout << abc[i] << "  ";
    }

    cout << endl;

    for (i = 0; i < (size - 1); i++)
    {
        index_ch = i;

        for (j = i + 1; j < size; j++)
        {

            if (abc[index_ch] > abc[j])
            {
                index_ch = j;
            }
        }
        
            temp = abc[index_ch];
            abc[index_ch] = abc[i];
            abc[i] = temp;
    }

    cout << endl;

    cout << "The Sorted Array is : \n";

    for (i = 0; i < size; i++)
    {
        cout << abc[i] << "  ";
    }

    _getch();
    return 0;
}



/*
We just have to keep track of current item and current minimum
At the end of inner loop iteration just swap the currunt minumum with the element present at arr[0]
*/