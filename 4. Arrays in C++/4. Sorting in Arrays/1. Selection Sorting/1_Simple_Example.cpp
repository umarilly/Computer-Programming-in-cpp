
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int abc[5] = {2, 4, 1, 5, 3};
	int i, j;

	int index_ch, temp;

	for (i = 0; i < 4; i++)
	{
		index_ch = i;
		cout << "index_ch in 1st Loop : " << index_ch << "\n";

		for (j = i + 1; j < 5; j++)
		{

			if (abc[index_ch] > abc[j])
			{

				index_ch = j;
				cout << "index_chin 2nd Loop : " << index_ch << "\n";
			}
		}

		temp = abc[index_ch];
		abc[index_ch] = abc[i];
		abc[i] = temp;
	}

	cout << "The Sorted array is : ";
	for (i = 0; i < 5; i++)
		cout << abc[i] << " ";

	_getch();
	return 0;
}
