#include <iostream>
#include <conio.h>

using namespace std;

void merge(int array[], int left, int mid, int right) {
    int leftSize = mid - left + 1;
    int rightSize = right - mid;

    int leftArray[leftSize], rightArray[rightSize];

    for (int i = 0; i < leftSize; i++) {
        leftArray[i] = array[left + i];
    }

    for (int j = 0; j < rightSize; j++) {
        rightArray[j] = array[mid + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = left;

    while (i < leftSize && j < rightSize) {
        if (leftArray[i] <= rightArray[j]) {
            array[k] = leftArray[i];
            i++;
        } else {
            array[k] = rightArray[j];
            j++;
        }
        k++;
    }

    while (i < leftSize) {
        array[k] = leftArray[i];
        i++;
        k++;
    }

    while (j < rightSize) {
        array[k] = rightArray[j];
        j++;
        k++;
    }
}

void mergeSort(int array[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(array, left, mid);
        mergeSort(array, mid + 1, right);

        merge(array, left, mid, right);
    }
}

int main() {

    int unsorted[] = {2,8,5,3,9,4,1,7};
    int size = sizeof(unsorted) / sizeof(unsorted[0]);

    mergeSort(unsorted, 0, size - 1);

    cout << "The Sorted Array is : ";
    for (int i = 0; i < size; i++) {
        cout << unsorted[i] << " ";
    }

    _getch();
    return 0;
}