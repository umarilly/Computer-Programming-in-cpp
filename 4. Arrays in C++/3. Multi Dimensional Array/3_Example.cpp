
#include <iostream>

using namespace std;

int main()
{
    int abc[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // Declaration & Initialization
    int i, j;
    cout << "The value of 2-D array are : \n"; // Printing of Initialized Vales

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << abc[i][j] << "  ";
        }
        cout << "\n";
    }

    return 0;
}
