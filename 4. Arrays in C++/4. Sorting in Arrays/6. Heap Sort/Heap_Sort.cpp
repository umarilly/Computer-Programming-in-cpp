#include <iostream>
#include <conio.h>

using namespace std;

int getLeftChildIndex(int parentIndex) {
    return 2 * parentIndex + 1;
}

int getRightChildIndex(int parentIndex) {
    return 2 * parentIndex + 2;
}

int getParentIndex(int childIndex) {
    return (childIndex - 1) / 2;
}

void heapify(int array[], int heapSize, int index) {
    int leftChildIndex = getLeftChildIndex(index);
    int rightChildIndex = getRightChildIndex(index);
    int largestIndex = index;

    if (leftChildIndex < heapSize && array[leftChildIndex] > array[largestIndex]) {
        largestIndex = leftChildIndex;
    }

    if (rightChildIndex < heapSize && array[rightChildIndex] > array[largestIndex]) {
        largestIndex = rightChildIndex;
    }

    if (largestIndex != index) {
        swap(array[index], array[largestIndex]);
        heapify(array, heapSize, largestIndex);
    }
}

void buildMaxHeap(int array[], int size) {
    for (int i = size / 2 - 1; i >= 0; i--) {
        heapify(array, size, i);
    }
}

void heapSort(int array[], int size) {
    buildMaxHeap(array, size);

    for (int i = size - 1; i > 0; i--) {
        swap(array[0], array[i]);
        heapify(array, i, 0);
    }
}

int main() {

    int array[] = {9,4,1,6,8,3,5};
    int size = sizeof(array) / sizeof(array[0]);

    heapSort(array, size);
    
    cout << "The Sorted Array : ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

    _getch();
    return 0;
}
